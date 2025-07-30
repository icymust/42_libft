/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:50:10 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 12:22:23 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		first;
	int		last;
	int		dst_pos;
	char	*dst;

	s1_len = 0;
	first = 0;
	last = 0;
	dst_pos = 0;
	s1_len = ft_strlen(s1);
	last = s1_len - 1;
	while (s1[first] && check_set(s1[first], set))
		first++;
	while (last >= first && check_set(s1[last], set))
		last--;
	if (first > last)
		return (ft_strdup(""));
	dst = malloc(last - first + 2);
	if (!dst)
		return (NULL);
	while (first <= last)
		dst[dst_pos++] = s1[first++];
	dst[dst_pos] = '\0';
	return (dst);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "   Hello, world!   ";
//     const char *set = " ";
//     const char *empty_set = "";

//     // Test case 1: Trimming spaces from both ends
//     char *result = ft_strtrim(str, set);
//     if (result && strcmp(result, "Hello, world!") == 0)
//         printf("Test 1 Passed: Trimmed string is '%s'\n", result);
//     else
//         printf("Test 1 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     // Test case 2: No characters to trim
//     result = ft_strtrim(str, empty_set);
//     if (result && strcmp(result, str) == 0)
//         printf("Test 2 Passed: No trimming needed, result is '%s'\n", result);
//     else
//         printf("Test 2 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     // Test case 3: Trimming all characters
//     result = ft_strtrim("aaaa", "a");
//     if (result && strcmp(result, "") == 0)
//         printf("Test 3 Passed: All characters trimmed, result is an empty string\n");
//     else
//         printf("Test 3 Failed: Unexpected result '%s'\n", result);
//     free(result);

//     return 0;
// }
