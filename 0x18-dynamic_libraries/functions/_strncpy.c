#include "main.h"

/**
 * _strncpy - Copies up to n characters from the source string src
 *            to the destination string dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to be copied from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
