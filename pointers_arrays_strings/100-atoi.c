#include "main.h"
/**
 * _atoi - convert strings to int
 * Desription: convert string to integer
 * @s : string
 * Return: An integer
 */
int _atoi(char *s)
{
	unsigned int num;
	int i, sign;

	num = 0;
	i = 0;
	sign = 1;
	/* skip space, newline and tabs*/
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	/*handle sign*/
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	/* run until reach end of string or reach non-numeric*/
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');

		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (sign * num);
}

