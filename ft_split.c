/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:51:22 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/17 16:38:01 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c);
static char	*ft_fill_word(char const *s, int start_of_word, int end_of_word);
static void	ft_free(char **result_str);
static void	ft_var_declaration(int *i, int *j, int *start_of_word);

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

static void	ft_var_declaration(int *i, int *j, int *start_of_word)
{
	*i = 0;
	*j = 0;
	*start_of_word = 0;
}
