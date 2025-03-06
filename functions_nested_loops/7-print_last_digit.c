#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - return last digit of a number
 * Description: Return the Reminder of the number divided by 10
 * @n : Any number
 * Return : The reminder of number divided by 10
 */
int print_last_digit(int n)
{
	int last_digit = abs((n % 10)) + 48;
	_putchar(last_digit);
	return last_digit;
}
