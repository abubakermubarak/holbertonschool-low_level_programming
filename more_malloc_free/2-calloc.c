#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * Description: allocate memory for an array with certain elements
 * @size: size of the array
 * @nmemb: number of array
 * Return: pointer to array if success otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	int value;
	unsigned int i;
	/* check if the array is for chars or ints */
	if (sizeof(size) == 4)
	{
		value = 0;
	}
	if (sizeof(size) == 1)
	{
		arr = (char *) arr;
		value = (char) value;
		value = '\0';
	}
	/* if size or number of elemnt equls zer0 return NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* allocate memory for the array */
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	/* set value for the array elemnts */
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = value;
	}
	return (arr);
}
