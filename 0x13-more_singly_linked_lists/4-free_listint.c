#include "lists.h"

/**
 * free_listint - function that frees a list_t list
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
	free(head);
}
