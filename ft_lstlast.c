#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

//ver2
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
