/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:04:52 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/18 12:23:22 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sum;
	char	*result;

	sum = count * size;
	result = malloc(sum);
	if (!result)
		return (NULL);
	ft_memset(result, 0, sum);
	return (result);
}
