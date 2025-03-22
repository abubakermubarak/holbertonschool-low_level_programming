#include "main.h"
int find_sqr(int n, int i);
/**
 * _sqrt_recursion - print squre root
 * Description - print squre root of number using recusrion
 * @n : Any number
 * Return: -1 if number doesnot have squre root otherwise the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqr(n, 1));
}
/**
 * find_sqr - check for squre root
 * Description - checks if i * i equlas n
 * @n: integer to find square root of
 * @i: number to check if it's squre = n
 * Return: square root if found otherwise -1
 */
int find_sqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqr(n, i + 1));
}
