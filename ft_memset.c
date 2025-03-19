/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:37:21 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:05:56 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Fills a memory area with a constant byte value.
 *
 * This function fills the first @p len bytes of the memory area pointed to
 * by @p b with the constant byte value @p c. It treats @p b as a pointer to
 * an unsigned char and sets each byte to the specified value. The function
 * returns a pointer to the memory area @p b.
 *
 * @param b Pointer to the memory area to be filled.
 * @param c The value to set, interpreted as an unsigned char.
 * @param len The number of bytes to set.
 *
 * @return A pointer to the memory area @p b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
