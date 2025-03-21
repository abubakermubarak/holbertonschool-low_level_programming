#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy n bites from string
 * Description: copy n bites form string to another using pointer
 * @dest: the array to copy to
 * @src: the string to copy
 * @n: number of char to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	if (*src == '\0' || n < 0)
	{
		return '\0';
	}
	*dest = *src;
	*_strncpy(dest + 1, src + 1, n - 1);
	return dest; 
}
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
