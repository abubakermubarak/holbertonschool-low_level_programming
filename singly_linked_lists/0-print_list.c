#include "lists.h"
#include <stdio.h>
/*
 * print_list - liked_list of type list_s
 * Description: print all elements in likedlist
 * @h: pointer to a likned list
 * Return: unsigned integer
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
