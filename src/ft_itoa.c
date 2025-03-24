/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:44:32 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:56:36 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(int n);
/**
 * @brief Converts an integer to a string.
 *
 * This function converts a given integer
 *  to its corresponding string representation.
 * It handles both positive and negative integers,
 *  as well as the special case of zero.
 *
 * @param n The integer to convert.
 *
 * @return A pointer to the newly allocated string
 *  containing the integer representation.
 *			Returns NULL if memory allocation fails.
 */

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

/**
 * @brief Calculates the number of digits in an integer.
 *
 * This function calculates the number of digits in the given integer.
 * It takes into account the sign of the number and
 *  returns the length of its string representation.
 *
 * @param n The integer whose digit count is to be determined.
 *
 * @return The number of digits in the integer,
 *  including space for a potential sign.
 */
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
