#include "main.h"
/**
 * print_line - printline
 * Description: print line of n segments
 * @n : Any ineger
 * Return: None
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
