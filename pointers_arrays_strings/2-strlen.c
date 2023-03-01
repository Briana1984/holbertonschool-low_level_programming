#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: void value add
 * return: returns the length of a string.
 */
int _strlen(char *s)
{
int i;
int longitud = 0;
for (i = 0; s[i] != '\0'; i++)
{
longitud++;
}
return (longitud);
}
