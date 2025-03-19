/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:39:35 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:58:39 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Searches for the first occurrence of a byte in memory.
 *
 * This function scans the memory block pointed to by @p s for the first
 * occurrence of the byte @p c, within the first @p n bytes. It returns
 * a pointer to the located byte, or NULL if the byte is not found.
 *
 * @param s Pointer to the memory block to be scanned.
 * @param c The byte to search for, interpreted as an unsigned char.
 * @param n The number of bytes to search.
 *
 * @return A pointer to the first occurrence of @p c in the memory block,
 *			or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
