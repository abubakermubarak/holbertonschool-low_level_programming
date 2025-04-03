#include "function_pointers.h"
/**
 * array_iterator - executes function on elements
 * Description: executes a function given as a parameter on each element of an array.
 * @array: pointer to array of integers
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
