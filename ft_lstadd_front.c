/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:03:00 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:11:41 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
//     // Test adding to the front of a list
//     t_list *list = ft_lstnew("World");
//     t_list *new_elem = ft_lstnew("Hello");
//     ft_lstadd_front(&list, new_elem);
//     printf("List content 1: %s\n", (char *)list->content);
// 	 printf("List content 2: %s\n", (char *)list->next->content);

//     return 0;
// }
