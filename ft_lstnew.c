/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:18:26 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/19 17:39:37 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Creates a new list element.
 *
 * This function allocates memory for a new list element, initializes its
 * content with the provided value, and sets its next pointer to NULL.
 *
 * @param content The content to assign to the new list element.
 *
 * @return A pointer to the newly created list element. Returns NULL if
 * 			memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
