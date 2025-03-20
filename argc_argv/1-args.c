#include <stdio.h>
/**
 * main - print number of arguments passed
 * Description: print number of argument passed int0 program using argc
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
