#include "main.h"
/**
 * _strspn - return number of bytes in the initial segment
 * Description: number of bytes in the initial segment
 * @s: intial string
 * @accept: a prefix substring.
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, flag;

	count = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; s[j] != '\0' && flag == 0; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	return (count);
}
