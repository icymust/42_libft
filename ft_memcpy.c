/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:05:55 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/17 10:22:24 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void){
//     char src1[]= "Hello world!";
//     char dest1[20];
//     char dest2[20];
//     ft_memcpy(dest1, src1, strlen(src1)+1);
//     memcpy(dest2, src1, strlen(src1)+1);
//     printf("Test 1: %s\n", strcmp(dest1, dest2) == 0 ? "TRUE" : "FALSE");

//     char src2[]= {0,1,2,3,4,5,6,7,8,9};
//     char dest3[20];
//     char dest4[20];
//     ft_memcpy(dest3, src2, strlen(src2)+1);
//     memcpy(dest4, src2, strlen(src2)+1);
//     printf("Test 2: %s\n", strcmp(dest1, dest2) == 0 ? "TRUE" : "FALSE");

//     if(ft_memcpy(NULL, NULL, 0) == NULL)
//         printf("Test 3: TRUE\n");
//     else
//         printf("Test 3: False\n");

//     char buf[] = "OverlapTest";
//     ft_memcpy(buf+2, buf, 5);
//     printf("Test 4: %s\n", buf);

//     // Test copying a string
//     const char src[] = "Hello, world!";
//     char dest[20];
//     ft_memcpy(dest, src, strlen(src) + 1);
//     printf("Copied string: %s\n", dest);

//     return 0;
// }