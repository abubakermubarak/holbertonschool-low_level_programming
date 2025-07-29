#include "main.h"
/**
 * _strspn - return number of bytes in the initial segment 
 * Description: number of bytes in the initial segment 
 * @s: intial string
 * @accept: a prefix substring.
 * return: number of bytes in the initial segment of s 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i,j, count;

	count = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
		}
	}
	return (count);
}
