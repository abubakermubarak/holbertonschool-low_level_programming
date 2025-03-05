#include <stdio.h>
/**
 * main - Entry point
 * Description: Print 0-9 with putchar
 *
 * Return: Always 0 when success
 */
int main(void)
{
	int i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
