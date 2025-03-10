#include "main.h"
/**
 * print_diagonal - Print diagonal
 * Description: draws a diagonal line on
 * @n : Any integer
 * Return: None
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
