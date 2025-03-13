#include "main.h"
/**
 * swap - swap two integers values
 * Description: Swap two integers values by pointers
 * @a : Any integer
 * @b: Any integer
 * Return: None
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * reverse_array - reverse array of ints
 * Description: reverse the content of ints array by swapping it
 * @a: Integers array
 * @n: Number of elements
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	n--;
	while (n > i)
	{
		swap(&a[i], &a[n]);
		i++;
		n--;
	}
}
