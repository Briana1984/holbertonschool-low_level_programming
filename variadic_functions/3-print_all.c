#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
va_list listado;
int n = 0, i = 0;
char *seperador = ", ";
char *cadena;

va_start(listado, format);

while (format && format[i])
i++;

while (format && format[n])
{
if (n  == (i - 1))
{
seperador = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(listado, int), seperador);
break;
case 'i':
printf("%d%s", va_arg(listado, int), seperador);
break;
case 'f':
printf("%f%s", va_arg(listado, double), seperador);
break;
case 's':
cadena = va_arg(listado, char *);
if (cadena == NULL)
cadena = "(nil)";
printf("%s%s", cadena, seperador);
break;
}
n++;
}
printf("\n");
va_end(listado);
}

