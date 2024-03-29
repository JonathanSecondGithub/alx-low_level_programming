#include "lists.h"

/**
 * listint_len -  function that returns the number
 * of elements in a linked listint_t list
 * @h: head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
