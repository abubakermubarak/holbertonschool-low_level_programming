#include "main.h"
/**
 * print_alphabet - Diaplay function
 * Description: Print alpabet in lower
 *
 * Return: Nothinf
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
