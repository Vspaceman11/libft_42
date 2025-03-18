/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:18:26 by vpushkar          #+#    #+#             */
/*   Updated: 2025/03/18 16:24:18 by vpushkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

// int main(void)
// {
//     int value = 12345;
//     t_list *node = ft_lstnew(&value);

//     if (!node)
//     {
//         printf("Error: ft_lstnew return NULL\n");
//         return (1);
//     }
//     printf("Node created!\n");
//     printf("Content: %d\n", *(int *)(node->content));
//     printf("Next node: %p\n", (void *)node->next);

//     free(node);
//     return (0);
// }
