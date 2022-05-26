#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	printf(NULL); /* Should not print anything - but will get compile warning */
	_printf(NULL);

	printf("Test: %s\n", NULL); /* Should print: Test: (null) */
	_printf("Test: %s\n", NULL);

	printf("%s\n", NULL);  /* Seg fault */
	_printf("%s\n", NULL);
	return (0);
}
