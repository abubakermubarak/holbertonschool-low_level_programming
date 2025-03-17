#include "main.h"
/**
 * factorial - calculate fact n
 * Description: calaculate fact n using recursion
 * @n : Any postive int
 * Return: factorial n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
