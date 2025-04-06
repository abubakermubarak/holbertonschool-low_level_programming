#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int peter(int s,...){
	return 0;
}
int main(void)
{
	/*
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum); 
 */
     int (*sum) (const unsigned int, ...);
	sum =  &sum_them_all;
sum=&peter;
	printf("%i\n", sum(4,2,3,4,5));	
    return (0);
}
