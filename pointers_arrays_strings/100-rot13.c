#include "main.h"
/**
 * rot13 - cipher text
 * Discription: cipher letter by 13 key
 * @string: Any string
 * Return: enciphred text
 */
char *rot13(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = (string[i] - 'a' + 13) % 26 + 'a';
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = (string[i] - 'A' + 13) % 26 + 'A';
		}
		i++;
	}
	return (string);
}
