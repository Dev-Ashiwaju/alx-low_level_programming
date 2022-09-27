#include "main.h"
/**
* _strstr - this function locates a substring
* @haystack:character string
* @needle:character string
* Return: a pointer to the beginning of substring or NULL
**/
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (needle[b] != haystack[c] || haystack[c] == '\0')
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}
