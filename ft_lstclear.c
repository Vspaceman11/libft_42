/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:36:34 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 14:00:46 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Deletes and frees all elements of a linked list.
 *
 * This function iterates through the linked list, applying the given
 * delete function (`del`) to each element's content and freeing the
 * allocated memory for each node using `ft_lstdelone`. After execution,
 * the list pointer is set to NULL.
 *
 * @param lst Pointer to the first node of the list.
 * @param del Function to delete the content of each node.
 *
 * @note If `lst` or `del` is NULL, the function does nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_lst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_lst;
	}
	*lst = NULL;
}
