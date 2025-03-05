#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lower alpa but e&q
 *
 * Return: (Always 0 when success)
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
