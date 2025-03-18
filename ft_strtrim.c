/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:11:44 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/18 14:44:30 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_newstr(int size);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	result = ft_newstr(end - start);
	if (result == NULL)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

static char	*ft_newstr(int size)
{
	char	*newstr;

	newstr = (char *)malloc((size + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	return (newstr);
}
// int	main(void)
// {
// 	char *s1 = "//Hello, World!//";
// 	char *set = "//";
// 	char *result = ft_strtrim(s1, set);

// 	printf("Before: \"%s\"\n", s1);
// 	printf("After:  \"%s\"\n", result);

// 	free(result);
// 	return (0);
// }
