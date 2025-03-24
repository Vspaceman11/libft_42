/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:24:35 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:39:30 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Deletes a single element from the linked list.
 *
 * This function takes a list element, applies the given delete function
 * to its content, and then frees the memory allocated for the element itself.
 *
 * @param lst The element to be deleted.
 * @param del The function used to delete the content of the element.
 *
 * @return void
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
