/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:47:10 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/18 17:11:08 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Counts the number of elements in a linked list.
 *
 * This function iterates through the entire linked list and counts
 * the number of elements. It stops when it reaches the end of the list
 * (i.e., when the next pointer is NULL).
 *
 * @param lst A pointer to the first element of the linked list.
 * @return The number of elements in the linked list.
 * Returns 0 if the list is empty.
 */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp_lst;

	count = 0;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		tmp_lst = tmp_lst->next;
		count++;
	}
	return (count);
}
// int main()
// {
// 	t_list *list = ft_lstnew("First element");
// 	ft_lstadd_back(&list, ft_lstnew("Second element"));
// 	ft_lstadd_back(&list, ft_lstnew("Third element"));

// 	printf("List size: %d\n", ft_lstsize(list));  // "List size: 3"

// 	return 0;
// }
