#include <stdio.h>
/**
 * main - Entry point
 * Description: All combination of single digit
 *
 * Return: Always 0 when success
 */
int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
