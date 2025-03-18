/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:12:19 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/18 17:28:18 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Returns the last element of a linked list.
 *
 * This function iterates through the linked list starting from the first
 * element and returns the last element. If the list is empty, it returns
 * NULL.
 *
 * @param lst A pointer to the first element of the linked list.
 * @return A pointer to the last element of the linked list, or NULL if
 *			the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_lst;

	if (lst == NULL)
		return (NULL);
	tmp_lst = lst;
	while (tmp_lst->next)
	{
		tmp_lst = tmp_lst->next;
	}
	return (tmp_lst);
}
