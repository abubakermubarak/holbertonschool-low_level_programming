#include <stdio.h>
/**
 * main - print program name
 * Description: print program name using argc & argv
 * @argc: number of arguemnts provided
 * @argv: string of arguemnts
 * Return: 0 when success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
