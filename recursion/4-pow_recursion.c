#include "main.h"
/**
 * _pow_recursion - rise to power
 * Description: rise x to power y
 * @x: Any integer
 * @y: Any postive integer
 * Return: -1 if y < 0 otherwise the number raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
