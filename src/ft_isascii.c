/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:24:09 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:50:42 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is an ASCII character.
 *
 * This function checks if the given character is within the ASCII range
 * (0 to 127 inclusive). It returns 1 if the character is an ASCII character,
 * and 0 otherwise.
 *
 * @param c The character to check.
 *
 * @return 1 if the character is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
