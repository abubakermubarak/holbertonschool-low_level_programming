#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatinate n bytes
 * Description: concatinate n bytes from src to dest
 * @dest: the string to append to
 * @src: the string to appends
 * @n: the number of bytes to append from src to dest
 * Return: pointer to result of append operation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		 dest++;
		 src++;
		 i++;
		 n--;
	}
	*dest = '\0';
	return (dest - i);
}
