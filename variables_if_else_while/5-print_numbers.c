#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all numbers 0-9
 *
 *
 * Return: Always 0 when success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	printf("\n");
	return (0);
}
