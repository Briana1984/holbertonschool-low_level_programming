#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: - parameters
 * @f: - function
 *
 * Return: 0;
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
f(name);
}
