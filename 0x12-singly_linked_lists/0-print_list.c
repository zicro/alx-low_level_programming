#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of a list_t
 * @h: pointer into head of list
 *
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		j++;
	}
	return (j);
}
