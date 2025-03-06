#include "main.h"
/**
 * _isalpha - Checks if input alpha
 * Description: By comparing the values of input with alphabet
 * @c : Any character
 * Return: 1 if alpha 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
