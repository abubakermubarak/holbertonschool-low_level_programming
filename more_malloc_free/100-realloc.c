#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	/* if newsize is zero & the pointer us not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	/* if new size bigger than old size retrurn Null */
	if (new_size > old_size)
	{
		return (NULL);
	}
	/* if the two sizes are equal return the same pointer */
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	free(ptr);
	return (malloc(new_size));
}
