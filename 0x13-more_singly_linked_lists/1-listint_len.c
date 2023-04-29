#include "lists.h"

/**
 * listint_len - get item numbers in listint_t
 * @h: head list pointer
 * Return: item number in list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
