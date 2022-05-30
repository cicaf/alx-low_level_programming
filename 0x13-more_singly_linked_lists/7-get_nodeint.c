#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
  * get_nodeint_at_index - Find node.
  * @head: Pointer to 1 node.
  * @index: position of the node.
  *
  * Description: gives nth node.
  * Return: Point to the n node in list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
