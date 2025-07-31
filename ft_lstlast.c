/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:03:04 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:11:45 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // Test getting the last element of a list
//     t_list *list = ft_lstnew(ft_strdup("First"));
//     t_list *second = ft_lstnew(ft_strdup("Second"));
//     t_list *third = ft_lstnew(ft_strdup("Third"));

//     if (!list || !second || !third)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     list->next = second;
//     second->next = third;

//     t_list *last = ft_lstlast(list);
//     printf("Last element content: %s\n", (char *)last->content);

//     // Free allocated memory
//     ft_lstdelone(third, free);
//     ft_lstdelone(second, free);
//     ft_lstdelone(list, free);

//     return 0;
// }

// // ver2
// // t_list *ft_lstlast(t_list *lst){
// //    int last;
// //    int i;
// //    if(!lst)
// //       return(NULL);
// //    last = ft_lstsize(lst)-1;
// //    i = 0;
// //    while(i < last){
// //       lst = lst->next;
// //       i++;
// //    }
// //    return(lst);
// // }
