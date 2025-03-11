#include "main.h"
/**
 * swap - swap two integers values
 * Description: Swap two integers values by pointers
 * @a : Any integer
 * @b: Any integer
 * Return: None
 */
void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * rev_string - reverses a string
 * Description: Reconstuct the string in reverse
 * @s: Any string
 * Return: None
 */
void rev_string(char *s)
{
	/* make pointers */
	char *start = s;
	char *end =  s;
	/* loop until *s = '\0' */
	while (*end != '\0')
	{
		end++;
	}
	/* don't start form '\0' */
	end--;
	/* loop until the start is the end and vise versa */
	while (end > start)
	{
		swap(end, start);
		end--;
		start++;
	}
}
