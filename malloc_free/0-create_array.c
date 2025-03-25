#include "main.h"
#include <stdlib.h>
/**
 * create_array - make array with certain value
 * Description: creat array using malloc and ceratain value
 * @size: array size
 * @c: array value
 * Return: poiner to array if success or Null otherwise
 */

char *create_array(unsigned int size, char c)
{
	int i;
       	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
