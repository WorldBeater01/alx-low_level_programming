#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint  - Prints all elements in a list
 * @h: head of list
 *
 * Return: nodecount
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}

