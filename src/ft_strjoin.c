/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:26:25 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:24:17 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Joins two strings into a newly allocated string.
 *
 * This function allocates memory and joins two strings, @p s1 and @p s2,
 * into a single new string. The contents of @p s1 are followed by the
 * contents of @p s2. The resulting string is null-terminated.
 *
 * @param s1 The first string to join.
 * @param s2 The second string to join.
 *
 * @return A pointer to the newly allocated string containing the concatenation
 * 			of @p s1 and @p s2, or NULL if memory allocation fails.
 */
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
