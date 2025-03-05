#include <stdio.h>
/**
 *  main - Entry point
 *  Description: Print alpahbet in lower then upper
 *
 *  Return: (Alwasys reurn 0 when success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
