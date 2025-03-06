#include "main.h"
/**
 * _islower -  checks for lowercase character
 * Description: Check if the input is lowercase
 *
 * @c : Any Character
 * Return: 1 if is lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
