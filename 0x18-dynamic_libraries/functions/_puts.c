#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string, followed by a newline, to stdout.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
