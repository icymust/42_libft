/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:04:17 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/29 10:04:48 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// void	print_content(void *content)
// {
// 	printf("Content: %s\n", (char *)content);
// }
// int	main(void)
// {
// 	// Test iterating over a list
// 	t_list	*list = ft_lstnew("First");
// 	t_list	*second = ft_lstnew("Second");
// 	t_list	*third = ft_lstnew("Third");

// 	if (!list || !second || !third)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	list->next = second;
// 	second->next = third;
// 	ft_lstiter(list, print_content);
// 	// Free allocated memory
// 	ft_lstdelone(third, free);
// 	ft_lstdelone(second, free);
// 	ft_lstdelone(list, free);
// 	return (0);
// }
