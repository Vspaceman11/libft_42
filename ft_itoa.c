/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:44:32 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/17 19:30:59 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	len_count(int n);

char	*ft_itoa(int n)
{
	char	*result_str;
	long	num;
	int		len;

	len = len_count(n);
	result_str = (char *)malloc(((len + 1)) * sizeof(char));
	if (result_str == NULL)
		return (NULL);
	num = n;
	result_str[len] = '\0';
	result_str[0] = '0';
	if (num < 0)
	{
		result_str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		result_str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (result_str);
}

static int	len_count(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
// int	main()
// {
//     int test_values[] = {0, 1, 42, -42, 2147483647, -2147483648};
//     for (int i = 0; i < 6; i++)
//     {
//         char *res = ft_itoa(test_values[i]);
//         printf("ft_itoa(%d) = \"%s\"\n", test_values[i], res);
//         free(res);
//     }
// 	// printf("%s", ft_itoa(2147483647));
//     // return 0;
// }
