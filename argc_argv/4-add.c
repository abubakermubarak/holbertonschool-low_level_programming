#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * description: adds positive numbers using argc & argv
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: o when success or one arg passed into prgram 1 if error
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
