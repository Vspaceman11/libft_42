/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:40:42 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/10 16:59:26 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>
// int	main()
// {
// 	int num = ft_isalpha('a');
// 	printf("%d\n", num);
// 	printf("%d", isalpha('a'));
// }
