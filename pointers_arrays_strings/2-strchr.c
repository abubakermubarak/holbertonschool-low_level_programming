#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * Description: return pointer to first ocuurence of char in string
 * @s: Any string
 * @c: Any charcter
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
