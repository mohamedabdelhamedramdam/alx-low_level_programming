#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from '0' to '9'
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
