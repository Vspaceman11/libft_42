/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:49:28 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:17:02 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes a string to the specified file descriptor.
 *
 * This function writes the string @p s
 * to the file descriptor specified by @p fd.
 * It stops writing when the null terminator is encountered.
 *
 * @param s The string to write.
 * @param fd The file descriptor to which the string will be written.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
