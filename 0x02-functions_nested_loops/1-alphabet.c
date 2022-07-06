#include "main.h"

/**
 * print_alphabet - prints characters
 *
 * Description: Prints alphabet from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
 * main - invokes print_alphabet
 *
 * Description: Invokes print_alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
