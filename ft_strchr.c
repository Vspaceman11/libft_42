/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:52:09 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/12 18:15:48 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// Comparing each letter in the string with c
// Checking if c is a terminator then return pointer to the end of the string
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
// int	main()
// {
// 	printf("%s\n", ft_strchr("Hello, World", 'A'));
// 	printf("%s\n", strchr("Hello, World", 'A'));
// 	return (0);
// }
