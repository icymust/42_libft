/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:43:56 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/04 17:41:15 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					minus;
	unsigned long long	result;

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
		if (result > LLONG_MAX && minus == 1)
			return (-1);
		else if (result > LLONG_MAX && minus == -1)
			return (0);
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (minus * ((int)result));
}
