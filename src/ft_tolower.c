/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:56:44 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:32:19 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an uppercase letter to its lowercase equivalent.
 *
 * This function checks if the character @p c is an uppercase letter (between
 * 'A' and 'Z'). If it is, it returns the corresponding lowercase letter by
 * adding 32 to the ASCII value of @p c. If @p c is not an uppercase letter,
 * it returns the character unchanged.
 *
 * @param c The character to convert.
 *
 * @return The lowercase version of @p c if it is an uppercase letter, or
 * 			@p c unchanged if it is not.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
