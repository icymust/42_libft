/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:08:33 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 12:26:51 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void modify_char(unsigned int i, char *c)
// {
//     *c = *c + i;
// }

// int main(void)
// {
//     // Test modifying a string with a function
//     char str[] = "abcd";
//     ft_striteri(str, modify_char);
//     printf("Modified string: %s\n", str);

//     return 0;
// }
