#include "lists.h"

/**
 * list_len - the number of items in linked list_t
 * @h: head of list pointer
 *
 * Return: nodes number
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
