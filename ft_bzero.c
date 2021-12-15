#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*sp;

	sp = (char *)s;
	while (n)
	{
		*sp = 0;
		sp++;
		n--;
	}
}
