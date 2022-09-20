#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int a = 0, len = 0, b;

	while (str[a++])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		b = len / 2;
	}
	else
	{
		b = (len + 1) / 2;
	}

	for (a = b; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');
}
