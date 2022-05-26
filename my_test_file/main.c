#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int a;
	int number;


	number = 19912507;
	a = _printf("%i, %d\n", number, number);
	printf("%d\n", a);
	a = _printf("% ");
	printf("%d\n", a);
	return (0);
}
