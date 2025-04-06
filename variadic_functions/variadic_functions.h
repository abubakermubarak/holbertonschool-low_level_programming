#include <stdarg.h>
#include <stddef.h>
#ifndef VARIADIC_FUNCTIONS_
#define VARIADIC_FUNCTIONS_
typedef struct format_types
{
	char identifier;
	void (*f)(char *separator,va_list ap);
}f_dt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
