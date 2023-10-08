#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from '0' to '9'
 * followed by the lowercase letters from 'a' to 'f', all on the same line,
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 15; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
