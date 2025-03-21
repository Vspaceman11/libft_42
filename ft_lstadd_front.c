/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:28:10 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/20 15:07:32 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Adds a new node at the beginning of the linked list.
 *
 * This function inserts the given node `new` at the start of the list `lst`.
 * If `lst` is empty, `new` becomes the first node.
 *
 * @param lst A pointer to the head of the linked list.
 * @param new The new node to be added at the front.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
