/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:08:09 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 11:34:06 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

// #include <stdio.h>
// int main(void)
// {
//     ft_putendl_fd("Hello, World!", 1);
//     return 0;
// }
