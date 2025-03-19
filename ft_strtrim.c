/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:11:44 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:31:43 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_newstr(int size);
/**
 * @brief Trims the characters from the start and end of the string @p s1
 * 			that are present in the set @p set.
 *
 * This function removes all leading and trailing characters in @p s1 that
 * are present in @p set. The function returns a new string with the trimmed
 * content. If any of the input strings are NULL, the function returns NULL.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to remove from the start and end of @p s1.
 *
 * @return A new string with the trimmed content, or NULL if allocation fails
 * 			or any of the input strings is NULL.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	result = ft_newstr(end - start);
	if (result == NULL)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/**
 * @brief Allocates memory for a new string with the given size.
 *
 * This function allocates memory for a new string of the specified size and
 * returns a pointer to the newly allocated memory. If the allocation fails,
 * it returns NULL.
 *
 * @param size The size of the new string.
 *
 * @return A pointer to the newly allocated string, or NULL if allocation fails.
 */

static char	*ft_newstr(int size)
{
	char	*newstr;

	newstr = (char *)malloc((size + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	return (newstr);
}
