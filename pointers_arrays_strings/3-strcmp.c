#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare strings
 * Description - comaare each  line in tewo string
 * @s1: any string
 * @s2: any string
 * Return: 0 if same, 1 id s1 greater, -1 if s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
