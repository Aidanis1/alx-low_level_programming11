#include <stdio.h>

/**
 * main -print 0123456789
 * return: Always 0 (success)
 */

int main(void)
{
	int n = 0;
	
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
