#include "main.h"
/**
 * puts2 - print even chracters
 * Description: print the even chars in string
 * @str: any string
 * Return: None
 */
void puts2(char *str)
{
	/* make counter */
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
