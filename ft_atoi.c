#include "libft.h"

static bool	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int		neg;
	long	num;
	size_t	tmp;

	while (ft_isspace(*str))
		str++;
	neg = 1;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	tmp = 0;
	while (*str && '0' <= *str && *str <= '9')
	{
		tmp = num * 10 + (*str - '0');
		if (neg == -1 && tmp > (size_t)LONG_MIN)
			return ((int)LONG_MIN);
		if (neg == 1 && tmp > LONG_MAX)
			return ((int)LONG_MAX);
		num = tmp;
		str++;
	}
	return (neg * (int)num);
}
