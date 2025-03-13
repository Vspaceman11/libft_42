/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:37:21 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/13 13:31:15 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

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
// int main() {
// 	char buffer1[20] = "Hello, world!";
// 	char buffer2[20] = "Hello, world!";

// 	//My ft_memset
// 	ft_memset(buffer2, '*', 5);
// 	printf("My ft_memset: %s\n", buffer2);

// 	//Original memset
// 	memset(buffer1, '*', 5);
// 	printf("Original memset: %s\n", buffer1);
// 	return (0);
// }
