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


	if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		if (n < 0)
		{
			printf("is negative");
		}
		else
		{
		i	printf("is zero");
		}
	}
	return (0);
}
