/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:00:01 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 17:13:55 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (!(p1[i] == p2[i]))
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	printf("%d\n", ft_memcmp("a", "A", 3));
// 	printf("%d", memcmp("a", "A", 3));
// 	return 0;
// }
