/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:39:35 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 18:14:21 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
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
// int	main()
// {
// 	char *ptr;
// 	char *ptr2;

// 	ptr = ft_memchr("Hellow", 'w', 0);
// 	ptr2 = memchr("Hellow", 'w', 0);
// 	printf("%c\n", *ptr);
// 	printf("%c", *ptr2);
// }
