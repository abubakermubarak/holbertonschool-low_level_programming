#include "main.h"
/**
 * swap_int - swap two integers values
 * Description: Swap two integers values by pointers
 * @a : Any integer
 * @b: Any integer
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
