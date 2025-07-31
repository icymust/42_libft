/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:31:00 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:21:48 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with alphanumeric character
//     printf("Test 'A': %d\n", ft_isalnum('A'));
//     printf("Test 'z': %d\n", ft_isalnum('z'));
//     printf("Test '5': %d\n", ft_isalnum('5'));
//     // Test with non-alphanumeric charater
//     printf("Test '@': %d\n", ft_isalnum('@'));
//     printf("Test ' ': %d\n", ft_isalnum(' '));
//     printf("Test '\n': %d\n", ft_isalnum('\n'));
//     return 0;
// }
