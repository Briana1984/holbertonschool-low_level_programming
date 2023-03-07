#include "main.h"
/**
* prime - a function that returns 1 if the input
* integer is a prime number, otherwise return 0
* @n: save
* @b: values
*
* Return: 0.
*/
int prime(int n, int b)
{
if (b % n == 0 || b < 2)
return (0);
else if (n == b - 1)
return (1);
else if (b > n)
return (prime(n + 1, b));
return (1);
}
/**
* is_prime_number - fuction prime
* @n: save
*
* Return: 0.
*/
int is_prime_number(int n)
{
return (prime(2, n));
}
