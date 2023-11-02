#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: type int minimum size
 * @mai: type int maiimum size
 * Return: NULL if malloc fails or min > mai
 */
int *array_range(int min, int mai)
{
	int *p;
	int i;

	if (min > mai)
		return (NULL);
	p = malloc((mai - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= mai; i++, min++)
		*(p + i) = min;

	return (p);
}
