#include <stdio.h>
/**
 * main - print arguments
 * Description: print arguments in argv
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
