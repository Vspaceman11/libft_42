/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:34:13 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:07:11 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes a character to the specified file descriptor.
 *
 * This function writes the given character @p c to the file descriptor
 * specified by @p fd. It uses the `write` system call to send the character
 * to the output. If the file descriptor is valid, the character will be
 * successfully written.
 *
 * @param c The character to write.
 * @param fd The file descriptor to which the character will be written.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
