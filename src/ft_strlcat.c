/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:02:27 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:25:00 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Concatenates two strings with a size limit.
 *
 * This function appends the @p src string to the end of the @p dst string
 * while ensuring that the total length of @p dst does not exceed @p dstsize
 * characters. The resulting string is null-terminated. If @p dstsize is less
 * than or equal to the length of @p dst, the function returns @p dstsize +
 * the length of @p src.
 *
 * @param dst The destination string to which @p src will be appended.
 * @param src The source string to append to @p dst.
 * @param dstsize The size of the destination buffer.
 *
 * @return The total length of the string it tried to create (i.e., the initial
 * 			length of @p dst plus the length of @p src).
 */
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
