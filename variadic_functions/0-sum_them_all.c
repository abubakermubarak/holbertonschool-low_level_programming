#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic function
 * Description: sum all input using variadic function
 * @n: counter
 * return: 0 if there is no numbers sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
