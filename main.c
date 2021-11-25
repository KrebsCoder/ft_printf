#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	main(void)
{
	int a, b;
	a = ft_printf("FT: %u\n", -1);
	b = printf("ORIGINAL: %u\n", -1);
	printf("LEN: %d\nLEN: %d\n", a, b);
	return (0);
}