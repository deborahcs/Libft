
#include "libft.h"
/* Returns the pointer of the first time that char occured */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	pointer;

	i = 0;
	pointer = ((char)c);
	while (s[i])
	{
		if (s[i] == pointer)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == pointer)
		return ((char *)&s[i]);
	return (NULL);
}
