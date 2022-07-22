#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: head of a dlistint_t list.
 * @index: index position
 * Return: the node or NULL if it doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)

	{
		if (a == index)
			return (head);
		head = head->next;
		a++;

	}
	return (NULL);
}
