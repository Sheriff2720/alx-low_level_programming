#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char c = 'a';

	while (round < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		round++;
	}
}
