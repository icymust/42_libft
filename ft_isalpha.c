/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:19:44 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:21:52 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with alphabetic characters
//     printf("Test 'A': %d\n", ft_isalpha('A'));
//     printf("Test 'z': %d\n", ft_isalpha('z'));

//     // Test with non-alphabetic characters
//     printf("Test '1': %d\n", ft_isalpha('1'));
//     printf("Test '@': %d\n", ft_isalpha('@'));

//     // Test with boundary values
//     printf("Test 'a': %d\n", ft_isalpha('a'));
//     printf("Test 'Z': %d\n", ft_isalpha('Z'));

//     return 0;
// }
