#include <stdio.h>
/**
 * main - combination of two digits
 * Description: possible different combinations of two digits.
 *
 * Return: 0 when success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (k > j && j > i)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

