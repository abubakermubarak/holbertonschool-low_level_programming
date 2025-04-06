#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_int(va_list ap)
{
	printf("%i ", va_arg(ap, int));
}
void print_char(va_list ap)
{
	printf("%c ", va_arg(ap, int));
}
void print_float(va_list ap)
{
	printf("%f ", va_arg(ap, double));
}
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap,char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s ", s);
	}
}
void print_all(const char * const format, ...)
{
	va_list ap;
	f_dt list[]={
		{'s', print_string},
		{'c', print_char},
		{'i', print_int},
		{'f', print_float}
	};
	int counter;
	int i;
	
	void (*ptr) (va_list);
	
	va_start(ap, 0);
	
	while (format[counter])
	{
		
		i = 0; 
		while (i<4)
		{
			if(list[i].identifier == format[counter])
			{
				ptr=list[i].f;
				ptr(ap);
			}
			i++;
		}
		counter++;
	}
	printf("\n");
}
