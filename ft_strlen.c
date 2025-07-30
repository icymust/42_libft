/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:26:20 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:23:02 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test calculating the length of a string
//     const char *str = "Hello, world!";
//     size_t len = ft_strlen(str);
//     printf("Length of string: %zu\n", len);

//     return 0;
// }
