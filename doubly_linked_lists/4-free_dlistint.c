
#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of a dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *auxl = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			auxl = head;
			head = (head)->next;
			free(auxl);
		}
	}
}
