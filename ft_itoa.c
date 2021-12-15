#include "libft.h"

static size_t	ft_cnt(int n)
{
	size_t	pn;
	size_t	cnt;

	pn = n;
	if (n < 0)
		pn = -pn;
	cnt = 1;
	while (pn / 10)
	{
		pn = pn / 10;
		cnt++;
	}
	return (cnt);
}

static void	ft_putnbr(char *s, int n, size_t cnt)
{
	size_t	pn;

	pn = n;
	if (n < 0)
		pn = -pn;
	while (cnt)
	{
		*(s + cnt - 1) = (pn % 10) + '0';
		pn = pn / 10;
		cnt--;
	}
}

char	*ft_itoa(int n)
{
	int		neg;
	size_t	cnt;
	char	*s;

	neg = 0;
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	cnt = ft_cnt(n);
	s = (char *)ft_calloc((cnt + neg + 1), sizeof(char));
	if (s == NULL)
		return (NULL);
	if (neg)
		*s = '-';
	ft_putnbr((s + neg), n, cnt);
	return (s);
}
