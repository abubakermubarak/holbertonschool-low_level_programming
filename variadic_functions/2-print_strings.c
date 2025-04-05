#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", va_arg(ap, char*));
		}
		if (separator != NULL && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
