#include "function_pointers.h"
/**
 * print_name - print_name
 * Description - print string using function pointer
 * @name: the name to print
 * @f: function pointer
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
