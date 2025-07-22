/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:09:17 by mmustone          #+#    #+#             */
/*   Updated: 2025/07/22 12:16:40 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			count++;
			while (str[i] != str[i])
			{
				i++;
			}
		}
	}
	return (count);
}

char	*split_word(char const *str, char c)
{
	char	*word;
	int		word_len;
	int		i;

	word_len = 0;
	word_pos = 0;
	i = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = str[i];
		i++
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		words_pos;
	int		i;

	words_pos = 0;
	i = 0;
	words = (char **)malloc(sizeof(char *) * size(s, c) + 1);
	if (!words || !s || !c)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[words_pos] = split_word(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			words_pos++;
		}
		else
			i++;
	}
	words[word_pos] = NULL;
	return (words);
}
