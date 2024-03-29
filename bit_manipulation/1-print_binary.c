#include "main.h"

/**
 * print_binary - print binary information about the current process
 * @n: the number of bytes to print
 *
 * Return: 0.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
