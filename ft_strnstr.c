/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:15:42 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/18 11:19:01 by mmustone         ###   ########.fr       */
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
//     if (result)
//         printf("Test 1 Passed: Found '%s' in '%s'\n", needle, haystack);
//     else
//         printf("Test 1 Failed: '%s' not found in '%s'\n", needle, haystack);

//     // Test case 2: Needle is not found in the haystack
//     result = ft_strnstr(haystack, not_found, 30);
//     if (!result)
//         printf("Test 2 Passed: '%s' not found in '%s'\n", not_found, haystack);
//     else
//         printf("Test 2 Failed: Unexpectedly found '%s' in '%s'\n", not_found, haystack);

//     // Test case 3: Empty needle
//     result = ft_strnstr(haystack, "", 30);
//     if (result == haystack)
//         printf("Test 3 Passed: Empty needle returns the haystack\n");
//     else
//         printf("Test 3 Failed: Empty needle did not return the haystack\n");

//     // Test case 4: loc is smaller than the position of the needle
//     result = ft_strnstr(haystack, needle, 5);
//     if (!result)
//         printf("Test 4 Passed: '%s' not found within first 5 characters of '%s'\n", needle, haystack);
//     else
//         printf("Test 4 Failed: Unexpectedly found '%s' within first 5 characters of '%s'\n", needle, haystack);

//     // Test case 5: loc is 0
//     result = ft_strnstr(haystack, needle, 0);
//     if (!result)
//         printf("Test 5 Passed: '%s' not found with loc = 0\n", needle);
//     else
//         printf("Test 5 Failed: Unexpectedly found '%s' with loc = 0\n", needle);

//     return 0;
// }
