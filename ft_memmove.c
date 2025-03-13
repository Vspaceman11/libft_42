/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:34:05 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/13 14:34:04 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

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
// int main()
// {
// 	char str1[20] = "HelloWorld";
// 	char str2[20] = "HelloWorld";

// 	// My ft_memmove
// 	ft_memmove(str2 + 2, str2, 5);
// 	printf("My ft_memmove: %s\n", str2); // "HeHelloorld"

// 	// Original memmove
// 	memmove(str1 + 2, str1, 5);
// 	printf("Original memmove: %s\n", str1); // "HeHelloorld"
// 	return 0;
// }
