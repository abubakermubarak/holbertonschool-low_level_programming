#include <unistd.h>
/**
 * main - Entry point
 * Description: Porgram print string using write function
 *
 *Return: (Alwasy 0 when success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}
