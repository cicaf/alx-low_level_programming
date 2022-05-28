#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - the start linked list
  * @head: just the head as always
  * @n: value to be...
  *
  * Return: address of element, or 0 if failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
