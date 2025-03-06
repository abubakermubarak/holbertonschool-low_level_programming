#include "main.h"
/**
 * _isupper - Check if the letter is upper
 * Decription: Compare the letter with "A" and "Z" if its = or between
 * @c: Any charcter
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
