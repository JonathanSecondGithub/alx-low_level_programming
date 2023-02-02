#include "lists.h"

/**
 * sum_listint - A function that finds
 * the sum of all the nodes
 * @head: A pointer to listint_t structure.
 * Return: sum of all the nodes
 */

int sum_listint(listint_t *head)
{
    int sum = 0;
    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
