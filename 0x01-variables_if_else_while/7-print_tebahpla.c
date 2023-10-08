#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 * from 'z' to 'a', followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
