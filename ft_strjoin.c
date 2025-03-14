/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:26:25 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/14 15:46:11 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*result_str;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result_str = (char *)malloc((s1_len + s2_len + 1) * (sizeof(char)));
	if (result_str == NULL)
		return (NULL);
	while (i < s1_len)
	{
		result_str[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		result_str[i++] = s2[j++];
	}
	result_str[i] = '\0';
	return (result_str);
}
// int	main()
// {
// 	printf("%s", ft_strjoin("Hello, ", "World"));
// 	return 0;
// }
