/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:04:52 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/18 12:23:22 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sum;
	char	*result;

	sum = count * size;
	result = malloc(sum);
	if (!result)
		return (NULL);
	ft_memset(result, 0, sum);
	return (result);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     // Test with normal allocation
//     size_t count1 = 5, size1 = sizeof(int);
//     int *arr1 = (int *)ft_calloc(count1, size1);
//     if (arr1)
//     {
//         printf("Allocated %zu elements of size %zu.\n", count1, size1);
//         for (size_t i = 0; i < count1; i++)
//             printf("arr1[%zu] = %d\n", i, arr1[i]);
//         free(arr1);
//     }

//     // Test with zero count
//     size_t count2 = 0, size2 = sizeof(char);
//     char *arr2 = (char *)ft_calloc(count2, size2);
//     if (arr2)
//     {
//         printf("Allocated %zu elements of size %zu.\n", count2, size2);
//         free(arr2);
//     }
//     else
//         printf("Allocation failed for zero count.\n");

//     // Test with zero size
//     size_t count3 = 10, size3 = 0;
//     char *arr3 = (char *)ft_calloc(count3, size3);
//     if (arr3)
//     {
//         printf("Allocated %zu elements of size %zu.\n", count3, size3);
//         free(arr3);
//     }
//     else
//         printf("Allocation failed for zero size.\n");

//     // Test with large allocation
//     size_t count4 = SIZE_MAX / 2, size4 = 2;
//     char *arr4 = (char *)ft_calloc(count4, size4);
//     if (arr4)
//     {
//         printf("Large allocation succeeded.\n");
//         free(arr4);
//     }
//     else
//         printf("Large allocation failed as expected.\n");

//     return 0;
// }
