/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:56:27 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 11:57:10 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len > 0)
	{
		*a = (unsigned char)c;
		len--;
		a++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // Test setting memory to a specific value
//     char str[10] = "abcdef";
//     ft_memset(str, 'x', 3);
//     printf("Result after memset: %s\n", str);

//     return 0;
// }
