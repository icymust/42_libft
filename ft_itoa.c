/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:10:29 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 12:21:15 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long l)
{
	int	i;

	i = 0;
	if (l <= 0)
	{
		l *= -1;
		i++;
	}
	while (l > 0)
	{
		l /= 10;
		i++;
	}
	return (i);
}

static char	*create_str(char *str, long l, int n)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[n--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	l;

	i = 0;
	l = n;
	i = count(l);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	return (create_str(str, l, i));
}

// #include <stdio.h>
// int main(void)
// {
//     // Test with positive number
//     printf("Test 123: %s\n", ft_itoa(123));

//     // Test with negative number
//     printf("Test -456: %s\n", ft_itoa(-456));

//     // Test with zero
//     printf("Test 0: %s\n", ft_itoa(0));

//     return 0;
// }
