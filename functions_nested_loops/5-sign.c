#include "main.h"

/**
 * print_sign - Print sign
 * Description: Return - if neg,+ if pos, 0 if 0
 * @n : An integer postive or negative
 * Return: + if pos, - if ne, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
