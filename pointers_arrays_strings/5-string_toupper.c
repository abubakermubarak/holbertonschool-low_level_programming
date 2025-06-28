#include "main.h"
#include <stdio.h>
/*
 * string_toupper - convert letters to upper
 * Description: converts all lower case in string toupper
 * @s: string
 * return: pointer to string after capitalize
 */
/**
 * string_toupper - a Function that convert lower to upper
 * @s: string
 * Return: string with all letters upper.
 */
char *string_toupper(char *s)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

