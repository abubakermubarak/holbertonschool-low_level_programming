#include <stdio.h>
/**
 * main - fizz buzz
 * Description: print numbers from 0-99
 *
 * Return: None
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i > 0 && i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
