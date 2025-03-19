/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:17:24 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 14:30:43 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Iterates through a linked list and
 *  applies a function to each element's content.
 *
 * This function traverses the given list
 *  and applies the function `f` to each node's content.
 *
 * @param lst The first node of the linked list.
 * @param f The function to apply to each node's content.
 *
 * @note If `lst` or `f` is NULL, the function does nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
