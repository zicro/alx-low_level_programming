#include "lists.h"

/**
 * delete_nodeint_at_index - drop node at index of listint_t
 * @head: pointer of pointer head list
 * @index: position of the node to drop
 * Return: when succeeded then 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ex, *tra;
	unsigned int j;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ex = *head;
		*head = (*head)->next;
		free(ex);
		return (1);
	}

	ex = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (ex == NULL)
			return (-1);
		ex = ex->next;
	}

	tra = ex->next;
	ex->next = tra->next;
	free(tra);

	return (1);
}
