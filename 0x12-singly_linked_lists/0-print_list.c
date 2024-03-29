#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list- function that prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (1);
	}
	else
	{
		printf("[%ld] %s\n", strlen(h->str), h->str);
	}
	h = h->next;
	i++;
	}
	return (i);
}
