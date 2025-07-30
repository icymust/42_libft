/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:23:41 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:21:59 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with digit characters
//     printf("Test '0': %d\n", ft_isdigit('0'));
//     printf("Test '9': %d\n", ft_isdigit('9'));

//     // Test with non-digit characters
//     printf("Test 'a': %d\n", ft_isdigit('a'));
//     printf("Test '@': %d\n", ft_isdigit('@'));

//     return 0;
// }
