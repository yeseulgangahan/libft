#include "libft.h"

static char const	*ft_wrdinit(char const *s, char c)
{
	while (*s && *s != c)
		s++;
	while (*s && *s == c)
		s++;
	return (s);
}

static bool	ft_rtndup(char **rtn, char const *s, char c, int len)
{
	if (len == 0)
		return (true);
	if (len == 1)
		c = '\0';
	*rtn = ft_substr(s, 0, (size_t)(ft_strchr(s, c) - s));
	if (*rtn == NULL)
		return (false);
	return (ft_rtndup(rtn + 1, ft_wrdinit(s, c), c, len - 1));
}

static char	**ft_strfree(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char const	*tmp;
	char		**rtn;
	int			rtnlen;

	s = ft_strtrim(s, &c);
	tmp = s;
	rtnlen = 0;
	while (*tmp)
	{
		tmp = ft_wrdinit(tmp, c);
		rtnlen++;
	}
	rtn = (char **)ft_calloc(rtnlen + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	if (!ft_rtndup(rtn, s, c, rtnlen))
		rtn = ft_strfree(rtn);
	free((void *)s);
	return (rtn);
}
