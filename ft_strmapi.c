/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:42:38 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:26:48 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applies a function to each character of a string.
 *
 * This function creates a new string by applying the function @p f
 * to each character of the string @p s, passing its index and value.
 * The resulting string is returned.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character of @p s.
 *
 * @return A new string with the modified characters.
 * Returns NULL if memory allocation fails or if either @p s or @p f is NULL.
 */
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
