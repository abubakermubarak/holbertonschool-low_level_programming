#include "main.h"
/**
 * _strlen_recursion - calculate length
 * Description: calculate string length using recusion
 *@s: Any string
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
