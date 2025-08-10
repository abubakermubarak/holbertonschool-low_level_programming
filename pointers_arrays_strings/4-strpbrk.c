#include "main.h"
/**
 * _strpbrk - locates first occurence
 * Decription:  locates the first occurrence in the string s
 * @s: Any string
 * @accept: Any string
 * Return:pointer to the byte in s that matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	/* if any string is Null */
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
