#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function for print
 * @n: - parameters
 * @separator: - spaces
 *
 * Return: 0;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int  i;
va_list parameters;
va_start(parameters, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(parameters, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(parameters);
}
