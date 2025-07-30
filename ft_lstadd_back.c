/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:02:28 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:11:37 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     // Test adding to an empty list
//     t_list *list = NULL;
//     t_list *new_elem = ft_lstnew("Hello");
//     ft_lstadd_back(&list, new_elem);
//     printf("List content: %s\n", (char *)list->content);

//     return 0;
// }
