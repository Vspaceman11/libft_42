/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:42:40 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/11 17:55:02 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// Comparing each letter in the string with c and setting it to variable last
// Checking if c is a terminator then return pointer to the end of the string
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
// int	main()
// {
// 	printf("%s\n", ft_strrchr("Hello, World", 'o'));
// 	printf("%s\n", strrchr("Hello, World", 'o'));
// 	return (0);
// }
