#include "main.h"
/**
 * _isdigit - Check if it's a digit
 * Description: Check if the Number between (0-9) included
 * @c : Any integer
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
