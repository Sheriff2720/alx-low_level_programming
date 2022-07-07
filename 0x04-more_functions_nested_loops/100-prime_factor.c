#include <stdio.h>

/**
 * main - prints the lagest prime factor of the number 612852475143
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	long in prime = 612852475143;
	long int quotient = prime;
	long int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%li\n", quotient);
	return (0);
}
