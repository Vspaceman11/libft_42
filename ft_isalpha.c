/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:40:42 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:35:32 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is an alphabetic letter.
 *
 * This function checks if the character @p c is either a lowercase letter
 * (between 'a' and 'z') or an uppercase letter (between 'A' and 'Z').
 * If @p c is an alphabetic letter, the function returns 1; otherwise, it
 * returns 0.
 *
 * @param c The character to check.
 *
 * @return 1 if @p c is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
