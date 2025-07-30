/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:19:00 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 13:27:10 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // Test deleting a single list element
//     t_list *elem = ft_lstnew(malloc(10));
//     if (!elem)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     ft_lstdelone(elem, free);
//     printf("Element deleted successfully\n");

//     return 0;
// }
