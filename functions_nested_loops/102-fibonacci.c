#include <stdio.h>
/**
 * main - Entry point
 * Description - Print first 50 fib number
 *
 * Return: Always 0 when success
 */
int main(void)
{
	/* intialize variables */
	long prev = 1;
	long old = 0;
	long cur;
	int i;
	/* Itrate 50 times */
	for (i = 0; i < 50; i++)
	{
		/* fib num equals the summ of the previous two numbers */
		cur = prev + old;
		printf("%lu", cur);
		if (i < 49)
		{
			printf(", ");
		}
		old = prev;
		prev = cur;
	}
	printf("\n");
	return (0);
}
