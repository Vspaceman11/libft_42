/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:50:57 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/14 17:10:30 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*result_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	result_str = malloc((len + 1) * sizeof(char));
	if (result_str == NULL)
		return (NULL);
	while (i < len)
	{
		result_str[i] = s[start];
		start++;
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}
// int main()
// {
// 	char *s = "Hello, world!";

// 	char *sub1 = ft_substr(s, 7, 5);
// 	printf("Substring 1: %s\n", sub1); // Output: "world"

// 	char *sub2 = ft_substr(s, 0, 5);
// 	printf("Substring 2: %s\n", sub2); // Output: "Hello"

// 	char *sub3 = ft_substr(s, 20, 5);
// 	printf("Substring 3: %s\n", sub3); // Output: ""

// 	free(sub1);
// 	free(sub3);
// 	free(sub2);

// 	return 0;
// }
