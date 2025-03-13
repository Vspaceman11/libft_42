/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:07:05 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/13 17:16:04 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// int	main()
// {
// 	ft_putnbr_fd(2147483647, 1);
// }
