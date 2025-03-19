/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:44:13 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:32:55 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 *
 * This function checks if the character @p c is a lowercase letter (between
 * 'a' and 'z'). If it is, it returns the corresponding uppercase letter by
 * subtracting 32 from the ASCII value of @p c.
 * If @p c is not a lowercase letter,
 * it returns the character unchanged.
 *
 * @param c The character to convert.
 *
 * @return The uppercase version of @p c if it is a lowercase letter, or
 * 			@p c unchanged if it is not.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
