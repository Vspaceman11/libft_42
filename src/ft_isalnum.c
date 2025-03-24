/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:08:38 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:36:02 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is alphanumeric.
 *
 * This function checks if the character @p c is either a digit (between '0'
 * and '9') or an alphabetic letter (between 'a' and 'z' or 'A' and 'Z').
 * If @p c is alphanumeric, the function returns 1; otherwise, it returns 0.
 *
 * @param c The character to check.
 *
 * @return 1 if @p c is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
