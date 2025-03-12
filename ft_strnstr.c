/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:03:39 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 12:51:32 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i + j] != '\0')
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char *str = "Never gonna give you upddd";
// 	char *to_find = "nay";
// 	printf("%s\n", ft_strnstr(str, to_find, 23));
// 	printf("%s\n", strnstr(str, to_find, 23));
// }
