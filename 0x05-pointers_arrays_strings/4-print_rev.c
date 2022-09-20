#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to tbe reserved.
 */
void print_rev(char *s)
{
	int len = 0, a = 0;

	while (s[a++])
		len++;

	for (a = len - 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
