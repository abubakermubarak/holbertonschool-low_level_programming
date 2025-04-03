#include "function_pointers.h"
/**
 * int_index - search for an int
 * Description: search for an int using cmp function pointer
 * @array: pointer for an array of ints
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * Return: -1 if no match or elemnt = 0 otherswise index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
