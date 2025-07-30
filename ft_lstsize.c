/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:03:13 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:11:53 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // Test getting the size of a list
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

//     int size = ft_lstsize(list);
//     printf("List size: %d\n", size);

//     // Free allocated memory
//     ft_lstdelone(third, free);
//     ft_lstdelone(second, free);
//     ft_lstdelone(list, free);

//     return 0;
// }
