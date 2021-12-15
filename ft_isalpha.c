#include "libft.h"

static int	ft_isupper(int c)
{
	return (0101 <= c && c <= 0132);
}

static int	ft_islower(int c)
{
	return (0141 <= c && c <= 0172);
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
