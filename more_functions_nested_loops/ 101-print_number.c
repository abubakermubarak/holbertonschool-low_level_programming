#include "main.h"
/*
* print_number - print integers
* Description - print int using putchars only
* @n: any integers
* return: None
*/
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n /10)
    {
        print_number(n / 10);
    }
    putchar('0' + n % 10);
}