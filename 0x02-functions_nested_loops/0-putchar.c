#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(word[i]);

		i++;
	}

	_putchar('\n');

	return (0);
}
