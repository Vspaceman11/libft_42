/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:42:38 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/14 18:03:33 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*result_str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	result_str = malloc((s_len + 1) * sizeof(char));
	if (result_str == NULL)
		return (NULL);
	while (i < s_len)
	{
		result_str[i] = (*f)(i, s[i]);
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}
