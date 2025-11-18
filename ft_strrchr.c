
#include "libft.h"
/* Returns the pointer of the last time that char occured */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	pointer;

	i = ft_strlen(s);
	pointer = ((char )c);
	while (i >= 0)
	{
		if (s[i] == pointer)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
