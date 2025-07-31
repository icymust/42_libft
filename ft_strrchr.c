/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:37:12 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 13:05:40 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "Hello, world!";
//     int ch = 'o';
//     int not_found = 'z';

//     // Test case 1: Character is found in the string
//     char *result = ft_strrchr(str, ch);
//     if (result)
//         printf("Pass: '%c' in '%s' at pos %ld\n", ch, str, result - str);
//     else
//         printf("Fail: '%c' not found in '%s'\n", ch, str);

//     // Test case 2: Character is not found in the string
//     result = ft_strrchr(str, not_found);
//     if (!result)
//         printf("Pass: '%c' not found in '%s'\n", not_found, str);
//     else
//         printf("Fail: found '%c' in '%s'\n", not_found, str);

//     return 0;
// }
