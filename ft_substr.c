/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:50:47 by decabral          #+#    #+#             */
/*   Updated: 2025/11/04 15:57:41 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			length;
	char			*new;

	i = 0;
	length = ft_strlen(s) - start;
	new = (char *) malloc((sizeof (char)) * length + 1);
	if (!new || !s)
		return (NULL);
	if (start >= len)
		return (NULL);
	while (i < length)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}
/*#include <stdio.h>
int main (void)
{
	const char	*src = "dogcat";
	printf("%s\n", ft_substr(src, 3, 6));
}*/
