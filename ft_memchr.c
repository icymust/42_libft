/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:35:44 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:24:04 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // Test finding a character in a string
//     const char str[] = "Hello, world!";
//     char *result = ft_memchr(str, 'w', strlen(str));
//     if (result)
//         printf("Found 'w' at position: %ld\n", result - str);
//     else
//         printf("Character 'w' not found\n");

//     // Test with a character not in the string
//     result = ft_memchr(str, 'z', strlen(str));
//     if (result)
//         printf("Found 'z' at position: %ld\n", result - str);
//     else
//         printf("Character 'z' not found\n");

//     return 0;
// }
