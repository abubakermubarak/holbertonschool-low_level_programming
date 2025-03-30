#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocat memory
 * Description: allocate memory with certain size
 * @b: size to allocate
 * Return: A pointer to the area reserved if failed exit with error 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
