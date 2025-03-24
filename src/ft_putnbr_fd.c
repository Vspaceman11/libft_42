/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:07:05 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:16:54 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes an integer to the specified file descriptor.
 *
 * This function writes the integer @p n
 * to the file descriptor specified by @p fd.
 * It handles both positive and negative numbers, as well as the special case of
 * the minimum integer value (-2147483648), which cannot be directly represented
 * as a positive number.
 *
 * @param n The integer to write.
 * @param fd The file descriptor to which the integer will be written.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n <= 2147483647 && n >= -2147483647)
		{
			if (n < 0)
			{
				ft_putchar_fd('-', fd);
				n = n * -1;
			}
			if (n >= 10)
			{
				ft_putnbr_fd(n / 10, fd);
			}
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}
