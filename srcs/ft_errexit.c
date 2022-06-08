
#include "../include/libft.h"

void	ft_errexit(char *message)
{
	write(2, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}