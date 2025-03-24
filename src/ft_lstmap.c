/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:46:23 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 16:41:26 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Creates a new list by applying
 * a function to each element of the given list.
 *
 * This function iterates through the original list,
 * applies the function `f` to each
 * element's content, and creates a new list
 * where each element's content is modified
 * by the function `f`. If memory allocation
 * for any new element fails, the function
 * frees any previously allocated memory and returns `NULL`.
 *
 * @param lst The list to iterate over.
 * @param f The function to apply to each element's content.
 * @param del The function to free the content of the nodes if an error occurs.
 *
 * @return A new list with modified content, or `NULL` if an error occurs during
 *			memory allocation.
 *
 * @note The original list `lst` is left unmodified.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_lst;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
