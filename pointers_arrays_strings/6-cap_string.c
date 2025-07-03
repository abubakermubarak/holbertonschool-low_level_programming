#include "main.h"
#include <stdio.h>
/**
 * is_seprator - check for seprator
 * Description: checks for speical chars
 * @c: Any Assci character
 * Return: 1 if match 0 otherwise
 */
int is_seprator(char c)
{
	int i;
	char sep[] = {'\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', ' '};

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - turn letters to Caps
 * Description: turn letters after sep into caps
 * @string: Any sentence(s)
 * Return: Captilized string(s)
 */
char *cap_string(char *string)
{
	int i;
	/*Check for the characters in string*/
	for (i = 0; string[i] != '\0'; i++)
	{
		/* Check if the character is seprator*/
		if (is_seprator(string[i]) == 1)
		{
			if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
			{
				string[i + 1] = string[i + 1] - 32;
			}
		}
	}
	return (string);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
