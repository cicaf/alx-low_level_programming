#include "lists.h"

/**
  * add_nodeint_end - new node.
  * @head: Points to list top.
  * @n: element node.
  *
  * Desription: node addition to list end.
  * Return: Points to new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;

	if (node == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == 0)
			return (0);
		node->n = n;
		node->next = 0;
		*head = node;
		return (*head);
	}
	else
	{
		while (node->next != 0)
			node = node->next;

		node->next = malloc(sizeof(listint_t));
		if (node->next == 0)
			return (0);
		node->next->n = n;
		node->next->next = 0;
	}

	return (node->next);
}
