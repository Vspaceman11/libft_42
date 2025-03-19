/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:08:53 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:27:39 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compares the first @p n characters of two strings.
 *
 * This function compares the first @p n characters of two strings, @p s1 and
 * @p s2. It returns a value less than, equal to, or greater than zero if
 * @p s1 is found to be lexicographically less than, equal to, or greater
 * than @p s2, respectively.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The number of characters to compare.
 *
 * @return An integer less than, equal to, or greater than zero if the first
 * 			@p n characters of @p s1 are found, respectively, to be less than,
 * 			to match, or be greater than the first @p n characters of @p s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (!(s1[i] == s2[i]))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
