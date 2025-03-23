#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * Description:function that fills memory with a constant byte.
 * @s: A pointer
 * @b: char value to fill in
 * @n: bytes to fill in
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s[i] != '\0' || n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
