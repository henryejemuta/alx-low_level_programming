#include "lists.h"

/**
 * list_len - A C function that returns
 * the number of elements in a linked list_t list.
 *
 * @h: first node of the linked list
 *	otherwise known as the head
 *
 * Return: the number of nodes
 **/
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
