#include <stdio.h>
#include "main.h"

/**
 * _strcat - entry point
 * @dest: first argument
 * @src: second argument
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; i++, j++)
	{

		dest[i] = src[j];

	}
	dest[i] = '\0';
	return (dest);
}
