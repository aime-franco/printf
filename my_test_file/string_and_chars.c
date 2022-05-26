#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	char a;
	char *b;

	a = 'H';
	b = "hello";

	a = _printf("%c, %s\n", a, b);
	return (0);
}
