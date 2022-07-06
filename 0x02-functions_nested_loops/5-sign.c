#include "main.h"

/**
 * print_sign - checks if a number is positive or negative
 *
 * @n: this is  number
 *
 * Description: checks either if a number is > 0 or < 0 or = 0
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
