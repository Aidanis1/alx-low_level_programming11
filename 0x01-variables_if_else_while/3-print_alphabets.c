#include <stdio.h>

/**
 *main - print lowercase and uppercase a-z A-Z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower < 'z')
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	while (upper < 'Z')
	{
		putchar(upper);
		upper++;
	}

	return (0);
}

