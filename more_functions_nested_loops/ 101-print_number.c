#include "main.h"
/*
* print_number - print integers
* Description - print int using putchars only
* @n: any integers
* return: None
*/
void print_number(int n)
{
    int num = n;
    if (num < 0)
    {
        _putchar('-');
        num = -n;
    }
    if (n /10)
    {
        print_number(num / 10);
    }
    putchar('0' + n % 10);
}