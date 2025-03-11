#include <stdio.h>
/**
 * print_array - print elements of an array
 * Description - print n element of an array
 * @a: Array of integers
 * @n: number of elemnts to print
 * Return: None
 */
void print_array(int *a, int n)
{
	/* make counter */
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", *a);
		}
		else
		{
			printf("%d\n", *a);
		}
		i++;
		a++;
	}
}
