#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a size
 * @array: vector
 * @size: tall
 * @action: funcion
 *
 * Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for  (i = 0; i < size; i++)
{
action(*(array + i));
}
}
