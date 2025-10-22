/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:27:05 by decabral          #+#    #+#             */
/*   Updated: 2025/10/21 08:27:07 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char str1[] = "ABC";
	char str2[] = "AB";
	
	printf("ABC is greater than AB: %d\n", ft_strncmp(str1, str2, 3));
	printf("ABC and AB  are equal in 
	the first two bytes: %d\n", ft_strncmp(str1, str2, 2));
	printf("AB is shorter than ABC: %d\n", ft_strncmp(str2, str1, 3));
}*/
