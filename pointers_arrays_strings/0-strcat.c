#include "main.h"
/**
*_strcat - append string after another one
*Description: add string at the end of the first
*@dest: the string to add to
*@src: the string to add
*Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}
