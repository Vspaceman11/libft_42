/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:03:39 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:28:23 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates a substring in a string within the first @p len characters.
 *
 * This function finds the first occurrence of the substring @p needle in the
 * string @p haystack, within the first @p len characters. If @p needle is
 * an empty string, the function returns @p haystack. If @p needle is not found,
 * the function returns NULL.
 *
 * @param haystack The string to search within.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 *
 * @return A pointer to the first occurrence of @p needle in @p haystack
 * 			within the first @p len characters, or NULL if not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i + j] != '\0')
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
