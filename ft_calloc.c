/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:41:43 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/14 18:57:17 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
// int main(void)
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);

// 	// My ft_calloc
// 	int *arr1 = (int *)ft_calloc(count, size);
// 	if (arr1 == NULL) {
// 		printf("Memory allocation error with ft_calloc\n");
// 		return 1;
// 	}

// 	// Oroginal calloc
// 	int *arr2 = (int *)calloc(count, size);
// 	if (arr2 == NULL) {
// 		printf("Memory allocation error with calloc\n");
// 		free(arr1);
// 		return 1;
// 	}

// 	// Check is every element in array is 0
// 	for (size_t i = 0; i < count; i++) {
// 		printf("ft_calloc arr1[%zu] = %d\n", i, arr1[i]);
// 		printf("calloc arr2[%zu] = %d\n", i, arr2[i]);
// 	}

// 	free(arr1);
// 	free(arr2);

// 	return 0;
// }
