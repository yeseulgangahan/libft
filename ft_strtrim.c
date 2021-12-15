#include "libft.h"

static bool	ft_setchr(char const *set, char c)
{
	while (set && *set)
	{
		if (*set == c)
			return (true);
		else
			set++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (s1 == NULL)
		return (ft_substr(s1, 0, 0));
	len = ft_strlen(s1);
	while (len && *s1 && ft_setchr(set, *s1))
	{
		s1++;
		len--;
	}
	while (len && ft_setchr(set, s1[len - 1]))
	{
		len--;
	}
	return (ft_substr(s1, 0, len));
}
