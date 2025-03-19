#include "main.h"
/**
 * more_numbers - print from 1-14
 * Description: print from 1-14 ten times using 3 putchar
 *
 * Return:None
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int n = j * 10;

			if (n > 90)
			{
				n /= 10;
			}
			_putchar('0' + (n / 10));
			if (j > 9)
			{
				_putchar('0' + (n % 10));
			}
		}
		_putchar('\n');
	}
}
