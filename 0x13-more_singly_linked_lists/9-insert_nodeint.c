#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - node put.
  * @head: points to top of list.
  * @idx: nth node indx.
  * @n: node data.
  *
  * Desctiption: New node at index.
  * It becomes the nth node.
  * Return: Pointer to node.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *node;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == 0 || head == 0)
		return (0);

	node = *head;

	if (idx == 0)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	while (i < idx)
	{
		node = node->next;

		if (node == 0)
			return (0);
		i++;
	}
	temp->next = node->next;
	node->next = temp;
	temp->n = n;
	node = temp;

	return (node);
}
