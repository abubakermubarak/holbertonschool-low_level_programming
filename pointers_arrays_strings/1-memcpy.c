#include "main.h"

/**
 * _memcpy - copy nbites from string to string
 * Description: copies n bytes from memory area src to memory area dest
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: number of bites to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
