/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:33:07 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/29 10:48:44 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	s_size;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (s_size <= start)
	{
		dst = (char *)malloc(sizeof(char) * 1);
		if (!dst)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (len > s_size - start)
		len = s_size - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "Hello, world!";

//     // Test case 1: Substring within bounds
//     char *result = ft_substr(str, 7, 5);
//     if (result && strcmp(result, "world") == 0)
//         printf("Test 1 Passed: Substring is '%s'\n", result);
//     else
//         printf("Test 1 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     // Test case 2: Substring starting out of bounds
//     result = ft_substr(str, 20, 5);
//     if (result && strcmp(result, "") == 0)
//         printf("Test 2 Passed: Out of bounds start returns empty string\n");
//     else
//         printf("Test 2 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     // Test case 3: Substring length exceeds string length
//     result = ft_substr(str, 7, 50);
//     if (result && strcmp(result, "world!") == 0)
//         printf("Test 3 Passed: Substring is '%s'\n", result);
//     else
//         printf("Test 3 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     return 0;
// }
