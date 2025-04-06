#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_int(char* sep,va_list ap)
{
	printf("%s%i",sep, va_arg(ap, int));
}
void print_char(char* sep,va_list ap)
{
	printf("%s%c",sep, va_arg(ap, int));
}
void print_float(char* sep,va_list ap)
{
	printf("%s%f",sep, va_arg(ap, double));
}
void print_string(char* sep,va_list ap)
{
	char *s;

	s = va_arg(ap,char *);
	if (s == NULL)
	{
		printf("%s%s",sep,"(nil)");
		return;
	}
	printf("%s%s",sep, s);
	
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
	char *sep="";
	
	void (*ptr) (char *,va_list);
	
	va_start(ap, 0);
	while (format!=NULL && format[counter])
	{
		
		i = 0; 
		while (i<4)
		{
			if(list[i].identifier == format[counter])
			{
				ptr=list[i].f;
				ptr(sep,ap);
				sep=", ";
			}
			i++;
		}
		counter++;
	}
	printf("\n");
	va_end(ap);
}
