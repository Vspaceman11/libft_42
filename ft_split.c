/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:51:22 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:19:40 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c);
static char	*ft_fill_word(char const *s, int start_of_word, int end_of_word);
static void	ft_free(char **result_str);
static void	ft_var_declaration(int *i, int *j, int *start_of_word);
/**
 * @brief Splits a string into an array of words, separated by a given delimiter.
 *
 * This function takes a string @p s and splits it into words,
 * which are separated by the character @p c.
 * The resulting words are returned as an array of strings.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 *
 * @return A NULL-terminated array of strings.
 * Each string represents a word from the original string.
 *			Returns NULL if memory allocation fails.
 */

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start_of_word;
	char	**result;

	result = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	ft_var_declaration(&i, &j, &start_of_word);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start_of_word = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_fill_word(s, start_of_word, i);
			if (!result[j++])
				return (ft_free(result), NULL);
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

/**
 * @brief Counts the number of words in a string, separated by a given delimiter.
 *
 * This function counts the number of words in the string @p s,
 * where words are separated by the delimiter @p c.
 * It treats consecutive delimiters as a single separator and skips over them.
 *
 * @param s The string to be analyzed.
 * @param c The delimiter character.
 *
 * @return The number of words in the string.
 */
static int	ft_word_count(char const *s, char c)
{
	int	is_word;
	int	count;
	int	i;

	is_word = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			is_word = 0;
		}
		i++;
	}
	return (count);
}

/**
 * @brief Fills a new string with a word from the original string.
 *
 * This function copies a word from the string @p s,
 *  starting at @p start_of_word and ending at @p end_of_word,
 * into a new dynamically allocated string.
 *
 * @param s The original string.
 * @param start_of_word The starting index of the word in the original string.
 * @param end_of_word The ending index of the word in the original string.
 *
 * @return A newly allocated string containing the word.
 * Returns NULL if memory allocation fails.
 */
static char	*ft_fill_word(char const *s, int start_of_word, int end_of_word)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end_of_word - start_of_word + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start_of_word < end_of_word)
	{
		word[i] = s[start_of_word];
		i++;
		start_of_word++;
	}
	word[i] = '\0';
	return (word);
}
/**
 * @brief Frees all allocated memory for an array of strings.
 *
 * This function frees all memory allocated
 * for the array of strings @p result_str.
 *
 * @param result_str The array of strings to be freed.
 */

static void	ft_free(char **result_str)
{
	int	i;

	i = 0;
	while (result_str[i] != NULL)
	{
		free(result_str[i]);
		i++;
	}
	free(result_str);
}
/**
 * @brief Initializes variables for the string splitting process.
 *
 * This function initializes the variables @p i, @p j,
 * and @p start_of_word to zero.
 * These variables are used
 * during the string splitting process to track
 * the position in the string and the word boundaries.
 *
 * @param i A pointer to the variable tracking
 * the position in the string.
 * @param j A pointer to the variable tracking
 * the index of the resulting word in the array.
 * @param start_of_word A pointer to the variable tracking
 * the starting position of the current word.
 */

static void	ft_var_declaration(int *i, int *j, int *start_of_word)
{
	*i = 0;
	*j = 0;
	*start_of_word = 0;
}
