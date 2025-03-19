/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:34:05 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:05:04 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Moves memory area from source to destination.
 *
 * This function copies @p len bytes from the memory area pointed to by @p src
 * to the memory area pointed to by @p dst, handling overlapping memory regions
 * correctly. If the memory areas overlap, it copies the data in a safe manner
 * by first checking the relative positions of the source and destination.
 * If either @p dst or @p src is NULL, the function returns NULL.
 *
 * @param dst Pointer to the destination memory area where the content is
 * copied.
 * @param src Pointer to the source memory area from which the content is
 * copied.
 * @param len The number of bytes to move.
 *
 * @return A pointer to the destination memory area @p dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (p_dst > p_src)
	{
		while (0 < len--)
		{
			p_dst[len] = p_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
