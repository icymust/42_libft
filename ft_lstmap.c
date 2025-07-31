/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:04:01 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/29 11:17:28 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <stdlib.h>
// void *duplicate_content(void *content)
// {
//     return ft_strdup((char *)content);
// }

// void delete_content(void *content)
// {
//     free(content);
// }

// void print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s\n", (char *)list->content);
//         list = list->next;
//     }
// }

// int main(void)
// {
//     // Create original list
//     t_list *list = ft_lstnew(ft_strdup("First"));
//     t_list *second = ft_lstnew(ft_strdup("Second"));
//     t_list *third = ft_lstnew(ft_strdup("Third"));

//     if (!list || !second || !third)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     list->next = second;
//     second->next = third;

//     // Map the list
//     t_list *new_list = ft_lstmap(list, duplicate_content, delete_content);

//     // Print original and new lists
//     printf("Original list:\n");
//     print_list(list);

//     printf("Mapped list:\n");
//     print_list(new_list);

//     // Free both lists
//     ft_lstclear(&list, delete_content);
//     ft_lstclear(&new_list, delete_content);

//     return 0;
// }
// //cc -Wall -Wextra -Werror ft_lstmap.c ft_lstdelone.c ft_lstnew.c ft_lstadd_back.c ft_lstclear.c libft.a 