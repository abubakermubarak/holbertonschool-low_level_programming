#include <stdarg.h>
#include "variadic_functions.h"


int sum_them_all(const unsigned int n, ...)
{
	valist ap;
	int sum;
	unsigned int i;
	sum = 0;
	va_start(ap);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}
