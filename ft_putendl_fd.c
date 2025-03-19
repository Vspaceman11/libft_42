/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:02:31 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:16:36 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes a string to the specified file descriptor,
 * followed by a newline.
 *
 * This function writes the string @p s to the file descriptor specified by @p fd
 * followed by a newline character. Each character of the string is written using
 * the `write` system call, and the function ensures that a newline is added at
 * the end of the string.
 *
 * @param s The string to write.
 * @param fd The file descriptor to which the string will be written.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
