/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:57:51 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:22:15 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*b1;
	const unsigned char	*b2;

	b1 = s1;
	b2 = s2;
	while (n--)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // Test comparing two identical strings
//     const char str1[] = "Hello";
//     const char str2[] = "Hello";
//     printf("Comparison result: %d\n", ft_memcmp(str1, str2, strlen(str1)));

//     // Test comparing two different strings
//     const char str3[] = "Hello";
//     const char str4[] = "World";
//     printf("Comparison result: %d\n", ft_memcmp(str3, str4, strlen(str3)));

//     return 0;
// }
