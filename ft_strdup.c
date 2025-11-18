
#include "libft.h"
/* It copies the str to a new str */
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new;	

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = ((char *) malloc(len + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s, len + 1);
	return (new);
}
