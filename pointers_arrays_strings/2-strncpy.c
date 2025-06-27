#include "main.h"
#include <stdio.h>
/**
* _strncpy - copy n bites from string
* Description: copy n bites form string to another using pointer
* @dest: the array to copy to
* @src: the string to copy
* @n: number of char to copy
* Return: pointer to dest after copy
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

if (dest == NULL || src == NULL)
{
return (NULL);
}
i = 0;
while (i < n && (src[i] != '\0'))
{
dest[i] = src[i];
i++;
}
/* if the source string finsihed but n geeater than strlen*/
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}


