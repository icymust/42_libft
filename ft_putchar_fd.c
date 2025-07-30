/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:03:43 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:12:17 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main(void)
// {
//     // Test writing a character to a file
//     int fd = open("test_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }

//     ft_putchar_fd('A', fd);
//     close(fd);

//     printf("Character 'A' written to test_putchar.txt\n");
//     return 0;
// }
