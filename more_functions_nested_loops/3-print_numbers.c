#include "main.h"
/**
 * print_numbers - print numbers
 * Description : print numbers(0-9) followed by newline
 *
 * Return : None
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
