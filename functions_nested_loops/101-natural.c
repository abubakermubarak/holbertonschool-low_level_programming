#include <stdio.h>
/**
 * main - Entry point
 * Description: computes and prints the sum of  multiples of 3 or 5 below 1024
 *
 * Return: Always 0  when success
 */
int main(void)
{
	/* intaialize sum to zero */
	int sum  = 0;

	/* itrate throught numbers untill 1024 using loop */
	for (int i = 0; i < 1024; i++)
	{
		/* check if the number is devisible by 3 and 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* incremante the sum by i */
			sum += i;
		}
	}
		/* print the sum */
		printf("%d\n", sum);
}
