#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - link list
  * @head: head of the linked list
  *
  *
  * Return: zero
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
