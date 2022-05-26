#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 * Return: 0 success
 */
nt main(void)
{
	int a;
	int b;
	char *str;

	str = "NULL";
	a = _printf("%r\n", NULL); /*expected: notrebloh*/
	printf("--->%d\n", a); /*expected: 10*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	return (0);
}
