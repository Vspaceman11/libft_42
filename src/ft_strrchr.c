/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:42:40 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:30:23 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Locates the last occurrence of the character @p c in the string @p s.
 *
 * This function searches for the last occurrence of the character @p c in
 * the string @p s. If the character is found, a pointer to its last
 * occurrence is returned.If the character is not found,
 * the function returns NULL.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 *
 * @return A pointer to the last occurrence of @p c in @p s, or NULL if
 * 			@p c is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
