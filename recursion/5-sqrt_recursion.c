#include "main.h"
/**
* raiz - a function that returns the natural
* square root of a number.
* @n: add natural number.
* @base: residuo.
* Return: 0.
*/
int raiz(int n, int base)
{
if (n * n == base)
return (n);
if (n * n > base)
return (-1);
return (raiz(n + 1, base));
}
/**
* _sqrt_recursion - a function that returns the natural
* square root of a number.
* @n: add natural number.
*
* Return: 0.
*/
int _sqrt_recursion(int n)
{
return (raiz(1, n));
}
