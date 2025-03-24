/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:50:57 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:31:10 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Extracts a substring from a given string starting at index @p start
 * 			and with a maximum length of @p len.
 *
 * This function allocates memory for and returns a new substring, which is
 * a part of the string @p s, starting from index @p start and up to @p len
 * characters long. If @p start is beyond the end of the string, an empty
 * string is returned. If @p len exceeds the length of the string, it is
 * adjusted to fit.
 *
 * @param s The string to extract the substring from.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 *
 * @return A new string containing the extracted substring, or NULL if
 * 			allocation fails or @p s is NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*result_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	result_str = malloc((len + 1) * sizeof(char));
	if (result_str == NULL)
		return (NULL);
	while (i < len)
	{
		result_str[i] = s[start];
		start++;
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}
