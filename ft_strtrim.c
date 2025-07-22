/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:50:10 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/22 09:55:18 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		first;
	int		last;
	int		dst_pos;
	char	*dst;

	s1_len = 0;
	first = 0;
	last = 0;
	dst_pos = 0;
	s1_len = ft_strlen(s1);
	last = s1_len - 1;
	while (s1[first] && check_set(s1[first], set))
		first++;
	while (last >= first && check_set(s1[last], set))
		last--;
	if (first > last)
		return (ft_strdup(""));
	dst = malloc(last - first + 2);
	if (!dst)
		return (NULL);
	while (first <= last)
		dst[dst_pos++] = s1[first++];
	dst[dst_pos] = '\0';
	return (dst);
}
