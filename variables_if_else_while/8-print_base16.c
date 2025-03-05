#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 when success
 */
int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
