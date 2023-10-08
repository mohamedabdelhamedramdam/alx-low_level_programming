#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	for (char i = 'a'; i <= alpha; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
