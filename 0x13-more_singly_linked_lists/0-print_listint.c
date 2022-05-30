#include <stdio.h>
#include "lists.h"

/**
  * print_listint - elements of a linked list printing
  * @h: The head
  *
  *
  * Return: nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}


