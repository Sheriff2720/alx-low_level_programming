#include <stdio.h>

/**
 * main - print digit combinations
 *
 * Description: print double digit combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	j = 48;
	j = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
