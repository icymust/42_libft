/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:43:56 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:25:23 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (minus * result);
}

// #include <stdio.h>

// int main(void)
// {
//     // Test with positive number
//     char *str1 = "1234";
//     printf("Input: '%s' -> Output: %i\n", str1, ft_atoi(str1));

//     // Test with negative number
//     char *str2 = "-5678";
//     printf("Input: '%s' -> Output: %i\n", str2, ft_atoi(str2));

//     // Test with leading spaces
//     char *str3 = "   42";
//     printf("Input: '%s' -> Output: %i\n", str3, ft_atoi(str3));

//     // Test with leading tabs and newlines
//     char *str4 = "\t\n\r\v\f 314";
//     printf("Input: '%s' -> Output: %i\n", str4, ft_atoi(str4));

//     // Test with mixed characters
//     char *str5 = "-123abc456";
//     printf("Input: '%s' -> Output: %i\n", str5, ft_atoi(str5));

//     // Test with only non-numeric characters
//     char *str6 = "abcd";
//     printf("Input: '%s' -> Output: %i\n", str6, ft_atoi(str6));

//     // Test with empty string
//     char *str7 = "";
//     printf("Input: '%s' -> Output: %i\n", str7, ft_atoi(str7));

//     // Test with string containing only '+'
//     char *str8 = "+";
//     printf("Input: '%s' -> Output: %i\n", str8, ft_atoi(str8));

//     // Test with string containing only '-' 
//     char *str9 = "-";
//     printf("Input: '%s' -> Output: %i\n", str9, ft_atoi(str9));

//     return 0;
// }