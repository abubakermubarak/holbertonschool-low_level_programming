#include "main.h"
/**
 * print_alphabet - Print alphabet in lower
 * Description: Print the aplabet in lower X10
 *
 * Return : None
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
