/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:42:46 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:37:43 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a portion of a string to an integer.
 *
 * This function processes a part of the string starting from index @p i and
 * converts the numeric characters to an integer value.
 *
 * @param str The string to process.
 * @param i The starting index in the string.
 *
 * @return The integer value formed by the numeric characters.
 */
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

/**
 * @brief Converts a string to an integer.
 *
 * This function converts a string to an integer. It skips leading whitespaces
 * and handles optional signs ('+' or '-') at the beginning. It stops converting
 * when it encounters a non-digit character.
 *
 * @param str The string to convert.
 *
 * @return The converted integer value.
 */
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
