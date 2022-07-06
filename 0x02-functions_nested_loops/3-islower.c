#include "main.h"

/**
 * main - prints a 1 if a character is lowercase or 0 if not
 *
 * Description: Prints out a 1 if a charachter is lowercase otherwise 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
