/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:30:37 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/18 17:46:12 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Adds a new element at the end of the list.
 *
 * This function appends the new element to the end of the linked list.
 * If the list is empty, the new element becomes the first element.
 *
 * @param lst Pointer to the pointer of the first element of the list.
 * @param new Pointer to the new element to be added to the list.
 *
 * @return void
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
