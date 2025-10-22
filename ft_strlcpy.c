/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:26:15 by decabral          #+#    #+#             */
/*   Updated: 2025/10/21 08:26:17 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*#include <stdio.h>
int main(void)
{
    char    dst1[100];
    char    dst2[100];
    const char *src_short = "Hello";
    const char *src_long = "This is a very long string";
    const char *src_empty = "";
    size_t  ret1;
    size_t  ret2;

    printf("--- Test 1: Normal Copy ('Hello' into size 10) ---\n");
    memset(dst1, 'X', 99);
    memset(dst2, 'X', 99);
    dst1[99] = '\0';
    dst2[99] = '\0';
    
    ret1 = ft_strlcpy(dst1, src_short, 10);
    ret2 = strlcpy(dst2, src_short, 10); 
    printf(" ft_strlcpy: dst = \"%s\", ret = %zu\n", dst1, ret1);
    printf("    strlcpy: dst = \"%s\", ret = %zu\n\n", dst2, ret2);

    printf("--- Test 2: Truncation ('This is...' into size 10) ---\n");
    memset(dst1, 'X', 99);
    memset(dst2, 'X', 99);
    
    ret1 = ft_strlcpy(dst1, src_long, 10);
    ret2 = strlcpy(dst2, src_long, 10); 
    
    printf(" ft_strlcpy: dst = \"%s\", ret = %zu\n", dst1, ret1);
    printf("    strlcpy: dst = \"%s\", ret = %zu\n\n", dst2, ret2);

    printf("--- Test 3: Edge Case (size = 1) ---\n");
    memset(dst1, 'X', 99);
    memset(dst2, 'X', 99);
    
    ret1 = ft_strlcpy(dst1, src_long, 1);
    ret2 = strlcpy(dst2, src_long, 1); 
    
    printf(" ft_strlcpy: dst = \"%s\", ret = %zu\n", dst1, ret1);
    printf("    strlcpy: dst = \"%s\", ret = %zu\n\n", dst2, ret2);


    printf("--- Test 4: Edge Case (size = 0) ---\n");
    memset(dst1, 'X', 99);
    memset(dst2, 'X', 99);
    dst1[5] = '\0'; 
    dst2[5] = '\0';
    
    ret1 = ft_strlcpy(dst1, src_long, 0);
    ret2 = strlcpy(dst2, src_long, 0); 
    
    printf(" ft_strlcpy: (dst should be unchanged) ret = %zu\n", ret1);
    printf("    strlcpy: (dst should be unchanged) ret = %zu\n\n", ret2);

    printf("--- Test 5: Edge Case (empty src) ---\n");
    memset(dst1, 'X', 99);
    memset(dst2, 'X', 99);
    
    ret1 = ft_strlcpy(dst1, src_empty, 10);
    ret2 = strlcpy(dst2, src_empty, 10); 
    
    printf(" ft_strlcpy: dst = \"%s\", ret = %zu\n", dst1, ret1);
    printf("    strlcpy: dst = \"%s\", ret = %zu\n\n", dst2, ret2);

    return 0;
}*/
