#include "main.h"
/**
 * print_rev - print string in reverse
 * Description: print string in reverse using pointer
 * @s : Any string
 * Return: None
 */
void print_rev(char *s)
{
	/* make copy of string and intialize counter */
	int i;
	char *copy = s;
	/* loop throught until *s = '\0' */
	for (i = 0; *copy != '\0'; copy++)
	{
		i++;
	}

	/* loop in the oppsite direction */
	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
