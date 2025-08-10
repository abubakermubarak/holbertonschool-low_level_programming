#include "main.h"
#include <stddef.h>
/**
 * _strstr - first occurence of substring
 * Description:  finds the first occurrence of the substring  in string
 * @needle: A substring
 * @haystack: A string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	/* if either of them is null return null */
	if (haystack == NULL || needle == NULL || haystack[0] == '\0')
	{
		return (NULL);
	}
	/* if needle is empty return haystack */
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (*needle != '\0')
	{
		i = 0;
		while (haystack[i] != '\0')
		{
			if (*needle == haystack[i])
			{
				return (needle);
			}
			i++;
		}
		needle++;
	}
	return (NULL);
}	
	
