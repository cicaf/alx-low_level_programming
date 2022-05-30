#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_aux - list
 * @p: head.
 * Return: null.
 */
void free_aux(aux_list *p)
{
	aux_list *aux;

	if (p == NULL)
	{
		return;
	}
	while (p != NULL)
	{
		aux = p;
		p = p->next;
		free(aux);
	}
}

/**
 * print_listint_safe - linked list.
 * @head: chwakis.
 *
 * Return: total nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	aux_list *a, *b, *t;

	a = NULL;
	for (; head != NULL; c++, head = head->next)
	{
		t = malloc(sizeof(aux_list));
		if (!t)
			exit(98);
		t->p = (void *)head;
		t->next = a;
		a = t;
		b = a->next;
		while (b != NULL)
		{
			if (head == b->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_aux(a);
				return (c);
			}
			b = b->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	free_aux(a);
	return (c);
