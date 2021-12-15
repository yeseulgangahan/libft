#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;

	s2 = (char *)malloc((n + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, n + 1);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL || ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	return (ft_strndup(s + start, len));
}
