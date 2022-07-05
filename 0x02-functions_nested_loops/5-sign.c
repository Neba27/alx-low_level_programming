#include "main.h"

/**
 * print_sign - check the code.
 * @n: - value to be checked
 * return: 1 if +ve value
 * return: 0 if zero value
 * Return: "-1" if -ve value
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
_putchar ('-');
return (-1);
}
