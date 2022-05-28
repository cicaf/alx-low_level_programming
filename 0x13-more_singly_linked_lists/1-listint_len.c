#include <stdio.h>
#include "lists.h"

/**
  * listint_len - itahesabu  elements in a linked list
  * @h: head as always...
  *
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
