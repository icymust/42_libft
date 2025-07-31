/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:24:43 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/31 12:30:25 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	result;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	result = 0;
	if (dstsize > dstlen)
		result = dstlen + srclen;
	else
		return (srclen + dstsize);
	while (src[i] && (dstlen + 1) < dstsize)
		dst[dstlen++] = src[i++];
	dst[dstlen] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     // Test concatenating strings with a size limit
//     char dest[20] = "Hello, ";
//     const char *src = "world!";
//     size_t result = ft_strlcat(dest, src, sizeof(dest));
//     printf("Concatenated string: %s\n", dest);
//     printf("Total length: %zu\n", result);

//     return 0;
// }