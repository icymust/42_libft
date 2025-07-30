/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:37:12 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/18 10:51:46 by mmustone         ###   ########.fr       */
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
//         printf("Test 1 Passed: Found '%c' in '%s' at position %ld\n", ch, str, result - str);
//     else
//         printf("Test 1 Failed: '%c' not found in '%s'\n", ch, str);

//     // Test case 2: Character is not found in the string
//     result = ft_strrchr(str, not_found);
//     if (!result)
//         printf("Test 2 Passed: '%c' not found in '%s'\n", not_found, str);
//     else
//         printf("Test 2 Failed: Unexpectedly found '%c' in '%s'\n", not_found, str);

//     // Test case 3: Character is the null terminator
//     result = ft_strrchr(str, '\0');
//     if (result == str + ft_strlen(str))
//         printf("Test 3 Passed: Null terminator found at the end of '%s'\n", str);
//     else
//         printf("Test 3 Failed: Null terminator not found correctly in '%s'\n", str);

//     return 0;
// }
