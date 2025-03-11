#include "main.h"
/**
 * puts_half - print half of the string
 * Description: prints half of a string using pointer
 * @str : any string
 * Return: None
 */
void puts_half(char *str)
{
	char *ptr = str;
	int i;
	int j = 1;
	int half;
	/* find the length */
	for (i = 0; *ptr != '\0'; i++)
	{
		ptr++;
	}
	if (i % 2 == 0)
	{
		half = i / 2;
	}
	else
	{
		half = (i + 1) / 2;
	}

	for (; j < i; j++)
	{
		str++;
		if (j >= half)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
