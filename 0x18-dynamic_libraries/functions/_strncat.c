#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be appended from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

    /* Find the length of dest */
	while (dest[dest_len])
		dest_len++;

    /* Append at most n characters of src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

    /* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}
