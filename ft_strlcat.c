/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:02:27 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 14:16:40 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// int main()
// {
// 	char dest[15] = "Hello, ";
// 	char dest2[15] = "Hello, ";
// 	char src[6] = "World";
// 	char src2[6] = "World";

// 	if (ft_strlcat(dest, src,10) == strlcat(dest2, src2, 10))
// 		printf("Fine");
// 	else
// 		printf("Not fine");
// 	return 0;
// }
