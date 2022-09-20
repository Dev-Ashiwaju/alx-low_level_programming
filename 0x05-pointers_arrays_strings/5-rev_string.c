#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int a = 0, len = 0;
	char temp;

	while (s[a++])
		len++;

	for (a = len - 1; a >= len / 2; a--)
	{
		temp = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = temp;
	}
}
