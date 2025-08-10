#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates first occurence
 * Decription:  locates the first occurrence in the string s
 * @s: Any string
 * @accept: Any string
 * Return:pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/* if any string is Null */
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	/* if any string is empty */
	if (s[0] == '\0' || accept[0] == '\0')
	{
		return (NULL);
	}
	/*loop throught the two strings */
	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	if (*accept == '\0')
	{
		s++;
		return (s);
	}
	/* if no match found return NULL */
	return (NULL);
}
