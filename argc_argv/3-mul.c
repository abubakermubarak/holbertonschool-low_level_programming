#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * Description : multiplies two numbers using argv
 * @argc: number of arguments
 * @argv: array of arguemnts
 * Return: 0 when success 1 if not two arguments provided
 */
int main(int argc, char *argv[])
{
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	z = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", z);
	return (0);
}
