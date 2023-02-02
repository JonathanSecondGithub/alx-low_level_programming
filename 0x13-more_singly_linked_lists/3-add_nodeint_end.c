#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list
 * @head: head
 * @n: data
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
		temp = temp->next;
		temp->next = new;
	}
	return (new);
}
