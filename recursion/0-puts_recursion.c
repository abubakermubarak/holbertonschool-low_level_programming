#include "main.h"
/**
 * _puts_recursion - print characters
 * Description:  print chacters using recursion
 * @s: Any string
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
