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

	for (j = 0; src[i] != '\0'; i++, j++)
	{
		printf("\ndest before:%s\n src before: %s\n", dest, src);
		dest[i] = src[j];
		printf("\ndest after: %s\n src after: %s\n", dest, src);
	}
	dest[i] = '\0';
	return (dest);
}
