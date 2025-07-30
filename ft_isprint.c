/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:48:50 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 11:25:19 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with printable characters
//     printf("Test 'A': %d\n", ft_isprint('A'));
//     printf("Test ' ': %d\n", ft_isprint(' '));

//     // Test with non-printable characters
//     printf("Test '\n': %d\n", ft_isprint('\n'));
//     printf("Test 127: %d\n", ft_isprint(127));

//     return 0;
// }
