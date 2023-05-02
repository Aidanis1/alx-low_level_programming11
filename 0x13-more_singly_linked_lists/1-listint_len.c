#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns length of a linked list
 *
 * @h: list to get length of
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *f)
{
	size_t len;

	if (f == NULL)
		return (0);

	for (len = 0; f != NULL; f = f->next, len++)
		;

	return (len);
}
