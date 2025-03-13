/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:22:59 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/13 12:22:14 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (!dst && !src)
		return (p_dst);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (p_dst);
}
// int	main()
// {
// 	char src[] = "12345";
// 	char dest1[10], dest2[10];

// 	ft_memcpy(dest1, src, 10);
// 	memcpy(dest2, src, 10);
// 	printf("My function: %s\n", dest1);
// 	printf("Original function: %s ", dest2);
// }
