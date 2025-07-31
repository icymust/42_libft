/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:36:11 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 12:23:57 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test duplicating a string
//     const char *str = "Hello, world!";
//     char *dup = ft_strdup(str);
//     printf("Duplicated string: %s\n", dup);
//     free(dup);

//     return 0;
// }
