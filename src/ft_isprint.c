/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:31:50 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:51:33 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is printable.
 *
 * This function checks if the given character is a printable character,
 * which includes characters with ASCII values from 32 to 126 (inclusive).
 * It returns 1 if the character is printable, and 0 otherwise.
 *
 * @param c The character to check.
 *
 * @return 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
