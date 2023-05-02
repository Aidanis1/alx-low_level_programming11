#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums a listint list
 *
 * @head: head of list
 *
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
	int s;

	if (head == NULL)
		return (0);

	for (s = 0; head != NULL; head = head->next)
		s += head->n;

	return (s);
}
