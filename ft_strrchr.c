#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	s = s + len;
	while (len)
	{	
		if (*s == (char)c)
			return ((char *)s);
		else
		{
			s--;
			len--;
		}
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}
