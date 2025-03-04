#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Description: Check whether the number is postive , negative or zero
 *
 * Return: (Always 0 when success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%i\n", n);


	if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		if (n < 0)
		{
			printf("is negative\n");
		}
		else
		{
			printf("is zero\n");
		}
	}
	return (0);
}
