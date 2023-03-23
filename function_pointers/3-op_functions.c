#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - this function adds two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function adds two number
 *
 * Return: resultado add
 */

int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - this function adds two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function sub two number
 *
 * Return: resultado op_sub
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - this function multiply two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function multiply two number
 *
 * Return: resultado multiply
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - this function divide two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function adds two number
 *
 * Return: resultado divide
 */
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf("Error\n");
exit(100);
}
/**
 * op_mod - this function adds two numbers
 * @a:the first number
 * @b:the second number.
 * Description: this function calcula modoule
 *
 * Return: resultado module
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

