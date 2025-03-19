/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:22:59 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:03:46 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies memory area from source to destination.
 *
 * This function copies @p n bytes from the memory area pointed to by @p src
 * to the memory area pointed to by @p dst. The memory areas must not overlap.
 * If either the @p dst or @p src pointer is NULL and @p n is greater than zero,
 * the function will return @p dst without performing any copying.
 *
 * @param dst Pointer to the destination memory area
 *  where the content is to be copied.
 * @param src Pointer to the source memory area
 *  from which the content is copied.
 * @param n The number of bytes to copy.
 *
 * @return A pointer to the destination memory area @p dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (!dst && !src && n > 0)
		return (dst);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
