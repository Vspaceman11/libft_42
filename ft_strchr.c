/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:52:09 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:23:05 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Searches for the first occurrence of character @p c in string @p s.
 *
 * This function iterates through the string @p s and returns a pointer to the
 * first occurrence of the character @p c. If @p c is the null terminator,
 * the function returns a pointer to the null terminator itself.
 *
 * @param s The string to search in.
 * @param c The character to find.
 *
 * @return A pointer to the first occurrence of @p c,
 * 			or NULL if @p c is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
