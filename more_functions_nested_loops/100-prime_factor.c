#include <stdio.h>

/**
 * main - a Function that ...
 * Return: Description of the return value.
 */

int main(void)
{
	long int number;
	int i;

	number = 612852475143;
	/*start with prime 2*/
	while (number % 2 == 0)
	{
		number = number / 2;
	}
	/* number is odd now so we use odd prime factors*/
	for (i = 3; i * i < number; i = i + 2)
	{
		while (number % i == 0)
		{
			number = number / i;
		}
	}
	printf("%ld\n", number);
	return (0);
}

