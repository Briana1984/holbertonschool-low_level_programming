#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
