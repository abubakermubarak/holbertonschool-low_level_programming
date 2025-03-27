#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate two strings
 * Description: concatinate two strings using malloc
 * @s1: Any string
 * @s2: Any string
 * Return: pointer to a new string contains the two strings
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *string;
	/* if any string is NULL make it empty */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* calculate two strings length */
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}
	string = malloc(l1 + l2 + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[l1 + l2] = '\0';
	return (string);
}
