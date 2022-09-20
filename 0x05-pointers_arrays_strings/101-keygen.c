#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i = 0, sum = 0, one_half, two_half;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		one_half = (sum - 2772) / 2;
		two_half = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			one_half++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + one_half))
			{
				password[i] -= one_half;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + two_half))
			{
				password[i] -= two_half;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
