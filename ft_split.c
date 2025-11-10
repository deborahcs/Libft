/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:26:00 by decabral          #+#    #+#             */
/*   Updated: 2025/11/10 14:26:03 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{	
			count++;	
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}
static int get_word_len(char const *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	total_words;
	int	len_words;
	char	**matrix;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	matrix = (char **)malloc(sizeof(char *) (total_words + 1));
	if (!matrix)
		return (NULL);
	while (i < total_words)
	{
		while (s[j] == c)
			j++;
		len_words = get_word_len(&s[j], c);
		matrix[i] = ft_substr(s, j, len_words);
		if (!matrix)
			return (NULL);
		j += len_words;
	}	
	matrix[i] = (NULL);
	return (matrix);
}
