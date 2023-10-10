#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @a: Type int a and @b type int b
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int last-digit= r % 10;

	if (r < 0)
	{
		last-digit = -last-digit;
		_putchar(last-digit +'0');
			return (last-digit);
	}
	else
	{
		putchar(last-digit+'0');
			return (last-digit);
	}
}


