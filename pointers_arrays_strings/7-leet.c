#include "main.h"
#include <stdio.h>
/**
 * leet - encode string
 * Description: encode string into 1337
 * @s: Any string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	int c;
	/* encoding letters*/
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int cipher[] = {4, 3, 0, 7, 1};

	c = 0;
	while (s[c])
	{
		if ((s[c] >= 'a' && s[c] <= 'z') || (s[c] >= 'A' && s[c] <= 'Z'))
		{
			for (i = 0; letters[i] != '\0'; i++)
			{
				if ((s[c] == letters[i]) || (s[c] - 32 == letters[i]))
				{
					s[c] =  '0' + cipher[i];
				}
			}
		}
		c++;
	}
	return (s);
}
