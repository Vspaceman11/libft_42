/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:32:22 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 15:56:01 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	int		i;
	char	*new_str;

	s1_len = ft_strlen(s1);
	i = 0;
	new_str = (char *)malloc((s1_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
// int		main(void)
// {
// 	printf("%s", ft_strdup("Copied string"));
// }
