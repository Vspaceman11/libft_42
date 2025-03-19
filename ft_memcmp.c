/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:00:01 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:59:40 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compares two memory blocks byte by byte.
 *
 * This function compares the first @p n bytes of the memory blocks
 * pointed to by @p s1 and @p s2. It returns an integer less than,
 * equal to, or greater than zero if the first @p n bytes of @p s1
 * are found to be less than, to match, or be greater than the first
 * @p n bytes of @p s2, respectively.
 *
 * @param s1 Pointer to the first memory block to compare.
 * @param s2 Pointer to the second memory block to compare.
 * @param n The number of bytes to compare.
 *
 * @return An integer representing the difference between the first
 *			mismatched byte in @p s1 and @p s2. Returns 0 if the
 *			memory blocks are equal.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (!(p1[i] == p2[i]))
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
