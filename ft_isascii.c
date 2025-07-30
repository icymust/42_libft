/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:29:05 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:06:20 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with ASCII characters
//     printf("Test 0: %d\n", ft_isascii(0));
//     printf("Test 127: %d\n", ft_isascii(127));

//     // Test with non-ASCII characters
//     printf("Test -1: %d\n", ft_isascii(-1));
//     printf("Test 128: %d\n", ft_isascii(128));

//     return 0;
// }
