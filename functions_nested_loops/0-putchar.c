#include "main.h"
#include <stdio.h>

/**
 * main  - Entry point
 * Description: print strinf using loop & putchar
 *
 *Return: Always 0 when success
 */
int main(void)
{
	char string[] = "_putchar";
	int length  = sizeof(string);
	int i = 0;

	while (i < length)
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
