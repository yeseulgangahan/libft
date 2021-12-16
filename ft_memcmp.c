#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	if (!n)
		return (0);
	s1 = p1;
	s2 = p2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
