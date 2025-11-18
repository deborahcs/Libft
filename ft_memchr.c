
#include "libft.h"
/* Searches for the first occurence of c respecting limit */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*array;

	i = 0;
	array = ((unsigned char *)s);
	while (i < n)
	{
		if (array[i] == ((unsigned char)c))
			return ((void *)&array[i]);
		i++;
	}
	return (NULL);
}
