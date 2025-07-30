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
//     char *new_content = malloc(strlen((char *)content) + 1);
//     if (new_content)
//         strcpy(new_content, (char *)content);
//     return new_content;
// }

// void delete_content(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     // Test mapping a list
//     t_list *list = ft_lstnew("First");
//     t_list *second = ft_lstnew("Second");
//     t_list *third = ft_lstnew("Third");

//     if (!list || !second || !third)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     list->next = second;
//     second->next = third;

//     t_list *new_list = ft_lstmap(list, duplicate_content, delete_content);
//     t_list *current = new_list;
//     while (current)
//     {
//         printf("Mapped content: %s\n", (char *)current->content);
//         current = current->next;
//     }

//     // Free allocated memory
//     ft_lstclear(&new_list, delete_content);
//     ft_lstdelone(third, free);
//     ft_lstdelone(second, free);
//     ft_lstdelone(list, free);

//     return 0;
// }
