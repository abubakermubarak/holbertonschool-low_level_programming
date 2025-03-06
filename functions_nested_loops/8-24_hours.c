#include "main.h"
/**
 * jack_bauer - Every minutes of the day
 * Descripton: prints every minute of the day 00:00 to 23:59.
 * Return: None
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			_putchar(48 + (hours / 10));
			_putchar(48 + (hours % 10));
			_putchar(':');
			_putchar(48 + (minutes / 10));
			_putchar(48 + (minutes % 10));
			minutes++;
			_putchar('\n');
		}
		hours++;
	}
}
