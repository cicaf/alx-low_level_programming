#include "lists.h"

/**
  * delete_nodeint_at_index - del node.
  * @head: pointer.
  * @index: Position  node on the list.
  *
  * Description: The function dels  nth node of  a linked list.
  * Return: 1 on success else -1.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *temp;
	unsigned int i = 1;

	if (head == 0 || *head == 0)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	while (i < index)
	{
		node = node->next;

		if (node == 0)
			return (-1);
		i++;
	}
	temp = node->next;
	node->next = node->next->next;
	free(temp);

	return (1);
}
