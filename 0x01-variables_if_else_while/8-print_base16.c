#include <stdio.h>

/**
 *main - print all the numbers of base 16 in lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char hexa = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
