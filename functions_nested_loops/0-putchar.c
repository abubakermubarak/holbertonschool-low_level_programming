#include <stdio.h>
#include <unistd.h>
/**
 * main  - Entry point
 * Description: print strinf using loop & putchar
 *
 *Return: Always 0 when success
 */
int main(void)
{
	char string[] = "_putchar\n";
	int length  = sizeof(string);
	write(1, string, length);
	return (0);
}
