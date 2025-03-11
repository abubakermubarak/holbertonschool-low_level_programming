#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * Description: prints a string, followed by a new line using pointer
 * @str : Any string
 * Return: None
 */
void _puts(char *str)
{
	/* loop untill str = '\0' */
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
