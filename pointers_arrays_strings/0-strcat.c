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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
    	{

    	}
    	
	j = 0;
	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
