#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: single list in
 * Return: all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sumatoria;


	for (sumatoria = 0; head != NULL;)
	{
		sumatoria += head->n;
		head = head->next;
	}
	return (sumatoria);
}
