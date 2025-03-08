#include <stdio.h>
/**
 * print_to_98 - print to 98
 * Description : prints all natural numbers from n to 98
 * @n : Any Integer Number
 * Return: None
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
