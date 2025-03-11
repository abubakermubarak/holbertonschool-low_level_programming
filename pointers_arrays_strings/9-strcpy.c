#include "main.h"
/**
 * _strcpy - copy string to another string
 * @dest: array to past the elements
 * @src: array to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
