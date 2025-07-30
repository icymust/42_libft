/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:08:20 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/28 11:12:28 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <stdio.h>
// #include <fcntl.h>
// int main(void)
// {
//     // Test writing a string to a file
//     int fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }

//     ft_putstr_fd("Hello, world!", fd);
//     close(fd);

//     printf("String 'Hello, world!' written to test_putstr.txt\n");
//     return 0;
// }
