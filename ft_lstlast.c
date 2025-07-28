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

// ver2
// t_list *ft_lstlast(t_list *lst){
//    int last;
//    int i;
//    if(!lst)
//       return(NULL);
//    last = ft_lstsize(lst)-1;
//    i = 0;
//    while(i < last){
//       lst = lst->next;
//       i++;
//    }
//    return(lst);
// }
