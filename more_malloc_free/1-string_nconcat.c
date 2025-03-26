#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinate two strings
 * Description - concatinate two strings with malloc
 * @s1: Any string
 * @s2: Any string
 * @n: number of bites to concatinate
 * Return: A pointer to thre new memory space if success otherwise NULL
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
	 unsigned int i, j, l1, l2, size;
	 char *new_string;
	 /* calculate length of s1 & s2 */
		 if (s1 == NULL)
	 {
		 s1 = "";
	 }
	 if (s2 == NULL)
	 {
		 s2 = "";
	 }
	 for (l1 = 0; s1[l1] != '\0'; l1++)
	 {}
	 for (l2 = 0; s2[l2] != '\0'; l2++)
	 {}
 
	 if (n >= l2)
	 {
		 size = l1 + l2;
	 }
	 else
	 {
		 size = l1 + n;
	 }
	 new_string = malloc(size + 1);
	 if (new_string == NULL)
	 {
		 return (NULL);
	 }
	 for (i = 0; i < l1; i++)
	 {
		 new_string[i] = s1[i];
	 }
	 for (j = 0; i < size; j++)
	 {
		 new_string[i] = s2[j];
		 i++;
	 }
	 new_string[i] = '\0';
	 return (new_string);
 }
