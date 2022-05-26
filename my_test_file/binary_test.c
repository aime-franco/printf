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
    a = _printf("%b\n", 0);
    printf("%d\n", a);
    return (0);
}
