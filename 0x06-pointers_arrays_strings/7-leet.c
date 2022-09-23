#include "main.h"

/**
 * letters - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int iOne = 0, iTwo;
	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[iOne])
	{
		for (iTwo = 0; iTwo <= 7; iTwo++)
		{
			if (str[iOne] == letters[iTwo] ||
			    str[iOne] - 32 == letters[iTwo])
				str[iOne] = iTwo + '0';
		}

		iOne++;
	}

	return (str);
}
