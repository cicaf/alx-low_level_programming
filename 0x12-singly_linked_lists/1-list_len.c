#include "lists.h"
#include "stdio.h"

/**
  * list_len - Finds count in linked list.
  * @h: points to linked list header.
  *
  * Return: elements total.
  */
size_t list_len(const list_t *h)
{
	size_t nodes = 0; /*checking elements in the node*/

	if (!h)
		return (nodes);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
