/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:09:32 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 11:20:55 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char *)s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}

// Test code
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     // Test with a normal string
//     char str1[10] = "abcdef";
//     printf("Before: '%s'\n", str1);
//     ft_bzero(str1 + 2, 3);
//     printf("After: '%s' (bytes 2-4 set to 0)\n", str1);

//     // Test with an empty string
//     char str2[10] = "";
//     printf("Before: '%s'\n", str2);
//     ft_bzero(str2, 5);
//     printf("After: '%s' (no change expected)\n", str2);

//     // Test with zero length
//     char str3[10] = "12345";
//     printf("Before: '%s'\n", str3);
//     ft_bzero(str3, 0);
//     printf("After: '%s' (no change expected)\n", str3);

//     // Test with full string
//     char str4[10] = "hello";
//     printf("Before: '%s'\n", str4);
//     ft_bzero(str4, 5);
//     printf("After: '%s' (all bytes set to 0)\n", str4);

//     return (0);
// }
