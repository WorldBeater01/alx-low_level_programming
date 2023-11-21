#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Returns no of elements in a list
 * @h: head of list
 *
 * Return: nodecount
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}
	return (node_count);
}
