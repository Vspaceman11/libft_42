/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:32:22 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:22:49 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Duplicates the string @p s1.
 *
 * This function allocates memory for a new string and copies the contents
 * of string @p s1 into the newly allocated memory. The new string is
 * null-terminated.
 *
 * @param s1 The string to duplicate.
 *
 * @return A pointer to the newly allocated string, or NULL if memory
 *			allocation fails.
 */
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
