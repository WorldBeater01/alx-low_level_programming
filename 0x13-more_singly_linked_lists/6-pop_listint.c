#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head of the list
 *
 * Return: store
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int store;

	if (!head || !*head)
		return (0);
	store = *head->n;
	current  = *head->next;
	free(*head);
	*head = current;
	return (store);
}


