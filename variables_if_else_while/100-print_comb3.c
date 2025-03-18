#include <stdio.h>
/**
 * main - combination of two digits
 * Description: possible different combinations of two digits.
 *
 * Return: 0 when success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
