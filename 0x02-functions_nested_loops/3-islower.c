#include "main.h"

/**
 * _islower -  prints a 1 if a character is lowercase or 0 if not
 *@c: c is an asscii character
 *
 * Description: Prints out a 1 if a charachter is lowercase otherwise 0
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
