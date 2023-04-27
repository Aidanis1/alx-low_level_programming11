#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of nodes starting at element h
 *
 * @h: first node of linked list to count from
 *
 * Return: number of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		len++;
		h = h->next;
	}
	return (len);
}
