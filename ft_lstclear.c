/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:30:07 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 13:42:40 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst || del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = temp;
		}
		*lst = NULL;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     // Test clearing a list
//     t_list *list = ft_lstnew(malloc(10));
//     ft_lstclear(&list, free);
//     printf("List cleared: %p\n", (void *)list);

//     return 0;
// }
