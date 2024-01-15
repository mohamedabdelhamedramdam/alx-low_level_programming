#include "main.h"

/**
 *  _strncpy - Copies up to n characters from the string src to dest,
 *  adding '\0' if src is shorter than n.
 *  This function behaves the same as `strncpy` from the standard library.
 *@dest: The destination buffer for the copied string
 *@src: The source string to be copied
 *@n: The maximum number of characters to copy
 *Return: A pointer to the destination string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
