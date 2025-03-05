#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet in reverse
 *
 * Return: Always 0 when success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
