#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * Desc: Entry
 *@n: int value
 *@separator: char
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list cadena;
unsigned int i = 0;
char *puntero;
va_start(cadena, n);
while (i < n)
{
puntero = va_arg(cadena, char *);
if (puntero == NULL)
{
printf("(nil)");
}
else
{
printf("%s", puntero);
}
if (separator != 0 && i < n - 1)
{
printf("%s", separator);
}
i++;
}
va_end(cadena);
printf("\n");
}
