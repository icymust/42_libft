/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:24:43 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/18 13:28:32 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	findlen(const char *s)
// {
// 	size_t	len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	return (len);
// }

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

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[50] = "asd";
// 	ft_strlcat(dest, src, 9);
// 	printf("Test: %s\n", dest);
// 	return (0);
// }