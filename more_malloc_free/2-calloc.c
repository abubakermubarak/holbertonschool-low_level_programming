#include "main.h"
/**
 * _calloc : allocate memory for an array
 * 
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	int i;
	/* if size or number of elemnt equls zer0 return NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* allocate memory for the array */
	arr = malloc(ss);
	if (arr == NULL)
	{
		return (NULL);
	}
	/* set value for the array elemnts */
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
		return (arr);
	}
}
