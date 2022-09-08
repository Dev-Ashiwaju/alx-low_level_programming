#include<string.h>
#include<unistd.h>

/**
* main - Prints out the last part of a quote in the standard error.
* Return: 1 if success.
*/
int main(void)
{
	char buf1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, buf1, strlen(buf1));
	return (1);
}
