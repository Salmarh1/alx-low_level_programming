#include "main.h"

/**
 * _strlen - Computes the length of the string s.
 * @s: The string to compute length for.
 *
 * Return: The length of the string s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
