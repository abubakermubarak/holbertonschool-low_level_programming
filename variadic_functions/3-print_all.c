#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	int i, counter;
	char c;
	float f;
	char* s;
	va_list ap;

	va_start(ap, 0);
	while (format[counter])
	{
		switch (format[counter])
		{
			case 'i':
			{
				i = va_arg(ap, int);
				printf("%i", i);
				break;
			}
			case 'c':
			{
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			}
			case 'f':
			{
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			}
			case 's':
			{
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			}
		}
		counter++;
	}
	printf("\n");
}
