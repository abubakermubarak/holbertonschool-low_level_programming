#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *s=va_arg(ap,char*);
		if(s !=NULL){
			printf("%s", s);
		}
		else{
			printf("nil");
		}
		
		if (separator != NULL && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
