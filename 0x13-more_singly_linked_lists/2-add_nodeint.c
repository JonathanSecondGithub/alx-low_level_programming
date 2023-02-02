#include "lists.h"

/**
 * add_nodeint -  function that returns the number
 * of elements in a linked listint_t list
 * @head: head
 * @n:n
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
