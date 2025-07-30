/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:08:09 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:12:21 by mmustone         ###   ########.fr       */
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
// #include <fcntl.h>
// int main(void)
// {
//     // Test writing a string with a newline to a file
//     int fd = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }

//     ft_putendl_fd("Hello, world!", fd);
//     close(fd);

//     printf("String 'Hello, world!' written to test_putendl.txt\n");
//     return 0;
// }
