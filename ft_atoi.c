/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:43:56 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:21:38 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	result;
	int	n;

	n = 0;
	minus = 1;
	result = 0;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			minus = -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		result = (result * 10) + (str[n] - '0');
		n++;
	}
	return (minus * result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = " -1234ab567";
// 	printf("%i\n", ft_atoi(str));
// 	return (0);
// }