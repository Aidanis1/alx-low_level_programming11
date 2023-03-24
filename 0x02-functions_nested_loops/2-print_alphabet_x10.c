#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i ;
	
	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 10; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
