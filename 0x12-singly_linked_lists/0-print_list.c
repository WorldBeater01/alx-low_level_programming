#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints list
 * @h: head of list
 * Return: Node count
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
