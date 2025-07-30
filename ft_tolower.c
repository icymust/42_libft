/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:02:58 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:23:17 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test case 1: Uppercase letter
//     int result = ft_tolower('A');
//     if (result == 'a')
//         printf("Test 1 Passed: 'A' converted to '%c'\n", result);
//     else
//         printf("Test 1 Failed: Unexpected result '%c'\n", result);

//     // Test case 2: Lowercase letter
//     result = ft_tolower('a');
//     if (result == 'a')
//         printf("Test 2 Passed: 'a' remains '%c'\n", result);
//     else
//         printf("Test 2 Failed: Unexpected result '%c'\n", result);

//     // Test case 3: Non-alphabetic character
//     result = ft_tolower('1');
//     if (result == '1')
//         printf("Test 3 Passed: '1' remains '%c'\n", result);
//     else
//         printf("Test 3 Failed: Unexpected result '%c'\n", result);

//     return 0;
// }
