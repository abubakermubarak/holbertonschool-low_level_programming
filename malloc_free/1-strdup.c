#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string in new memory area
 * description: make a copy from a string using malloc
 * @str: Any string
 * Return: a pointer to the copy string if sucess NULL otherwise
 */
char *_strdup(char *str)
{
	int i, j;
	char *copy;
	/* if string is empty return null */
	if (str == NULL)
	{
		return (NULL);
	}

	/* calculate string length */
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	/* allocate memory with str same size and length */
	copy = malloc(i + 1);
	/* if malloc failed and retrned NULL return null */
	if (copy == NULL)
	{
		return (NULL);
	}
	/* copy str contents into copy */
	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}
	copy[j] = '\0';
	return (copy);
}
