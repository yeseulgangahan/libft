#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	s_c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(s_c + i) == (unsigned char)c)
		{
			return ((void *)(s_c + i));
		}
		i++;
	}
	return (NULL);
}
