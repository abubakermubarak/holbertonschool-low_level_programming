#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabet in lowercase
 *
 * Return: Always 0 when success
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}