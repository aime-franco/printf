#include "main.h"
#include <stdio.h>
#include <limits.h>

/*main - Entry point
 * Return: 0 success
 */
nt main(void)
{
	int a;
	int b;

	a = 145;

	b = _printf("%o\n", a);
	printf("> %i\n", b);
	printf("%o\n", a);
	return (0);
}
