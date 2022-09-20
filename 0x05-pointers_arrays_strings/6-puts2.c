#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int a = 0, len = 0;

	while (str[a++])
		len++;

	for (a = 0; a < len; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
