/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:08:16 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:12:24 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main(void)
// {
//     // Test writing a number to a file
//     int fd = open("test_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }

//     ft_putnbr_fd(12345, fd);
//     close(fd);

//     printf("Number 12345 written to test_putnbr.txt\n");
//     return 0;
// }
