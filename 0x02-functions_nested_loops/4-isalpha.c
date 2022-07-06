#include "main.h"

/**
 * _isalpha - checks for alphabet character
 *
 * @c: is an ascii character
 *
 * Description: Prints 1 if is an alphabetic character else 0
 *
 * Return: Always 0 (Success))
 */
int _isalpha(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
