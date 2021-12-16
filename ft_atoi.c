#include "libft.h"

static bool	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int			neg;
	size_t		num;

	while (ft_isspace(*str))
		str++;
	neg = 1;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if (neg == -1 && num > -LONG_MIN)
			return ((int)LONG_MIN);
		if (neg == 1 && num > LONG_MAX)
			return ((int)LONG_MAX);
		str++;
	}
	return (neg * (int)num);
}
