/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:23:46 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:25:38 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies a string to a destination with a size limit.
 *
 * This function copies the @p src string to the @p dst string, ensuring that
 * the copied string is null-terminated and that the total size of @p dst
 * does not exceed @p dstsize characters. If @p dstsize is 0, it returns
 * the length of @p src without modifying @p dst.
 *
 * @param dst The destination string to copy the content to.
 * @param src The source string to be copied.
 * @param dstsize The size of the destination buffer.
 *
 * @return The total length of the string it tried to create (i.e., the length
 * 			of @p src).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
