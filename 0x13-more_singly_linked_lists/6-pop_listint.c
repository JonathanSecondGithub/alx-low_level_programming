#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 */

int pop_listint(listint_t **head)
{
	int temp;

	temp = (*head)->n;
	if (*head == NULL)
		return (0);

	free(*head);
	*head = (*head)->next;
	return (temp);
}