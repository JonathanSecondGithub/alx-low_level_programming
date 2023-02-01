#include "lists.h"

/**
 * listint_len -  function that returns the number
 * of elements in a linked listint_t list
 * @h: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    new->next = *head;
    new->n = n;

    *head = new;

    return (new);
}