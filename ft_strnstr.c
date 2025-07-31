/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:15:42 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 13:06:28 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < loc)
	{
		n = 0;
		while (haystack[i + n] != '\0' && haystack[i + n] == needle[n] && i
			+ n < loc)
		{
			if (needle[n + 1] == '\0')
				return ((char *)&haystack[i]);
			++n;
		}
		++i;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *haystack = "Hello, this is a simple test string.";
//     const char *needle = "simple";
//     const char *not_found = "missing";

//     // Test case 1: Needle is found in the haystack
//     char *result = ft_strnstr(haystack, needle, 30);
//     if (result){
//         printf("Pass: Found '%s' in '%s'\n", needle, haystack);
// 		printf("Result: %s\n", result);
// 	}
//     else
//         printf("Fail: '%s' not found in '%s'\n", needle, haystack);

//     // Test case 2: Needle is not found in the haystack
//     result = ft_strnstr(haystack, not_found, 30);
//     if (!result)
//         printf("Pass: '%s' not found in '%s'\n", not_found, haystack);
//     else
//         printf("Fail: found '%s' in '%s'\n", not_found, haystack);

//     return 0;
// }
