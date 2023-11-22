#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node in the list
 * @index: index of nth node
 *
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *current = head;

	while (current && n < index)
	{
		current = current->next;
		n++;
	}
	return (current ? current : NULL);
}

