/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:22:28 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/13 15:37:56 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char arr1[11] = "HelloWorld";
// 	char arr2[11] = "HelloWorld";

// 	// Printing before bzero
// 	printf("Before ft_bzero: arr1 = %s\n", arr1);
// 	printf("Before bzero: arr2 = %s\n", arr2);

// 	// My ft_bzero
// 	ft_bzero(arr1, 5);  // Zeroing first 5 elements
// 	printf("After ft_bzero: arr1 = %s\n", arr1); // Output empty string

// 	// Original bzero
// 	bzero(arr2, 5);  // Zeroing first 5 elements
// 	printf("After bzero: arr2 = %s\n", arr2); // Output empty string
// 	return 0;
// }
