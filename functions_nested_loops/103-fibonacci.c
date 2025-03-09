#include <stdio.h>
/**
 * main - Entry point
 * Description : print sum of odd term in fib numbers under 4b
 *
 * Return: (Always 0 when success)
 */
int main(void)
{
	int sum = 0;
	int prev = 0;
	int old = 1;
	int cur = 1;
	/* itrate untill 4 million */
	while (cur <= 4000000)
	{
		if (cur % 2 != 0)
		{
			sum += cur;
		}
		old = prev;
		prev = cur;
		cur = old  + prev;
		/* printf("%d, ", cur); */
	}
	printf("%d\n", sum);
	return (0);
}
