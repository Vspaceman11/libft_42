/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:42:46 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/11 14:14:35 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_cast_to_int(const char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;
	int	sign_count;

	i = 0;
	sign = 1;
	sign_count = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign_count++;
		if (sign_count > 1)
			return (0);
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = ft_cast_to_int(str, i);
	if (sign < 0)
		result *= -1;
	return (result);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%d", ft_atoi("		+9999999999 334dsds	"));
// 	return 0;
// }
