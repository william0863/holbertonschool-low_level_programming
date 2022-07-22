#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 *  the beginning of a dlistint_t list.
 * @head: head of the linked list
 * @n: data in new node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	new->next = (*head);
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
