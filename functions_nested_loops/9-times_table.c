#include "main.h"
/**
 * times_table  - Print timestable
 * Description: Prints timestable from 0-9 using nested loops
 *
 * Return: None
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			if (i * j < 10)
			{
				_putchar('0' + i * j);
			}
			else
			{
				_putchar('0' +  (i * j) / 10);
				_putchar('0' +  (i * j) % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				if (i * (j + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
