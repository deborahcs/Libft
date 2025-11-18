
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[i] == ss2[i] && ss1[i] && i < n - 1)
		i++;
	return (ss1[i] - ss2[i]);
}
