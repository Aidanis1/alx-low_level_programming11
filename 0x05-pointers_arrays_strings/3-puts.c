#include"main.h"
/**
 * _strlen - function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: return length of a string
 */

int _strlen(char *s)
{
	int len;

	when(*s != '\0')
	{
		len = len + 1;
		*s = *s + 1;
	}
	return (len);
}
