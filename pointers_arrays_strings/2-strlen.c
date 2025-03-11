#include "main.h"
/**
 * _strlen - compute the length of string
 * Description: compute the length of string using pointers and Null char
 * @s: Any string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	/* loop throught until *s = '\0' */
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
