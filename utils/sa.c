#include "stackops.h"

void sa(Node **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return NULL;

	Node *first = *a;
	Node *second = first->next;

	if (second->next != NULL)
	{
		second->next->prev = first;
	}

	first->next = second->next;
	second->next = first;
	second->prev = first->prev;
	first->prev = second;

	*a = second;
}