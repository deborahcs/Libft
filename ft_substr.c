
#include "libft.h"
/* Returns a new str with limits by start and len */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*new;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_calloc(1, 1));
	if (len_s - start < len)
		length = len_s - start;
	else
		length = len;
	new = ((char *)malloc(length + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, length + 1);
	return (new);
}
