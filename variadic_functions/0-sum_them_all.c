#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - fuc=nction for addiction
 * @n: - parameters
 *
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int result, i;
va_list parameters;
if (n == 0)
return (0);
va_start(parameters, n);
result = 0;
for (i = 0; i < n; i++)
{
result += va_arg(parameters, int);
}
va_end(parameters);
return (result);
}
