/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:03:08 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:11:50 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // Test creating a new list element
//     t_list *elem = ft_lstnew("Hello, world!");
//     if (elem)
//     {
//         printf("Element content: %s\n", (char *)elem->content);
//         ft_lstdelone(elem, free);
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
