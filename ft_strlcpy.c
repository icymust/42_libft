/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:11:08 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/21 10:03:43 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize > 0)
	{
		while (n < dstsize - 1 && src[n])
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // Test copying a string with a size limit
//     char dest[10];
//     const char *src = "Hello, world!";
//     size_t result = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Copied string: %s\n", dest);
//     printf("Total length: %zu\n", result);

//     return 0;
// }
