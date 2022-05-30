#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: Pointer to start of list.
  */
void free_list(list_t *head)
{
	list_t *node;

	while (head != 0)
	{
		node = head;/*what am i even doing*/
		head = head->next;
		free(node->str);
		free(node);
	}
}
