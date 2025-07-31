/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:06:24 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 12:22:39 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test finding a character in a string
//     const char *str = "Hello, world!";
//     char *result = ft_strchr(str, 'w');
//     if (result){
//         printf("Found 'w' at position: %ld\n", result - str );
// 		printf("Result: %s\n", result);
// 	}
//     else
//         printf("Character 'w' not found\n");

//     return 0;
// }
