#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s2 = s;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
