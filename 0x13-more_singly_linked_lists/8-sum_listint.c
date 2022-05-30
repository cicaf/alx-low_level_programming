#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - sums the data in the lists
  * @head: the kichwa of the list,genesis
  * Return: sum of the list
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
