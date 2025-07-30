/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:58:31 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:23:22 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' & c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test case 1: Lowercase letter
//     int result = ft_toupper('a');
//     if (result == 'A')
//         printf("Test 1 Passed: 'a' converted to '%c'\n", result);
//     else
//         printf("Test 1 Failed: Unexpected result '%c'\n", result);

//     // Test case 2: Uppercase letter
//     result = ft_toupper('A');
//     if (result == 'A')
//         printf("Test 2 Passed: 'A' remains '%c'\n", result);
//     else
//         printf("Test 2 Failed: Unexpected result '%c'\n", result);

//     // Test case 3: Non-alphabetic character
//     result = ft_toupper('1');
//     if (result == '1')
//         printf("Test 3 Passed: '1' remains '%c'\n", result);
//     else
//         printf("Test 3 Failed: Unexpected result '%c'\n", result);

//     return 0;
// }
