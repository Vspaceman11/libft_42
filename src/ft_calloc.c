/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:41:43 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:36:28 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Allocates memory and initializes it to zero.
 *
 * This function allocates memory for an array of @p count elements, each of
 * size @p size, and initializes all bytes in the allocated memory to zero.
 * If memory allocation fails, it returns NULL.
 *
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 *
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
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
