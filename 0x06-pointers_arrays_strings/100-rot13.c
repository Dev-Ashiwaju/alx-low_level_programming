#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int iOne = 0, iTwo;
	char alphas[52] = {'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L',
				'M', 'N', 'O', 'P', 'Q', 'R',
				'S', 'T', 'U', 'V', 'W', 'X',
				'Y', 'Z', 'a', 'b', 'c', 'd',
				'e', 'f', 'g', 'h', 'i', 'j',
				'k', 'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u', 'v',
				'w', 'x', 'y', 'z'};
	char keyRot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
				'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', 'A', 'B', 'C', 'D', 'E',
				'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'n', 'o', 'p', 'q',
				'r', 's', 't', 'u', 'v', 'w',
				'x', 'y', 'z', 'a', 'b', 'c',
				'd', 'e', 'f', 'g', 'h', 'i',
				'j', 'k', 'l', 'm'};

	while (str[iOne])
	{
		for (iTwo = 0; iTwo < 52; iTwo++)
		{
			if (str[iOne] == alphas[iTwo])
			{
				str[iOne] = keyRot13[iTwo];
				break;
			}
		}

		iOne++;
	}

	return (str);
}
