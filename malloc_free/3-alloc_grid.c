#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create Two dimintional array
 * Description: create two dimintional array using malloc
 * @width: width of the grid
 * @height: height of the grid
 * Return: if success return a pointer to the 2d array otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	/* initalize variable */
	int **array;
	int i;
	/* reserve memory */
	array = malloc(width * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
       	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int));
		array[i][0] = 0;
	}
	return (array);
}
