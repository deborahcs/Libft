/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:10:30 by decabral          #+#    #+#             */
/*   Updated: 2025/11/07 16:31:15 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	len_s1;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	if (len_s1 > 0)
		end = len_s1 - 1;
	else
		end = 0;
	while (end > start && ft_is_in_set(s1[end], set))
		end--;
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + start, len + 1);
	return (new);
}
/*
int main (void)
{

}
*/
