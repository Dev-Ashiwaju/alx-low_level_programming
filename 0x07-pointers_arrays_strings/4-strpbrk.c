#include "main.h"
/**
* _strpbrk - function searches string for any set of bytes
* @s: string
* @accept: string
* Return: a pointer to the byte in s
**/

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (0);
}
