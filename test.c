#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <limits.h>
int	main()
{
	char **a = ft_split(0, 3);
	if (a)
		printf("%s\n", a[0]);
}
