#include "lists.h"

/**
 * print_list - A C function that prints
 * all the elements of a list_t list.
 *
 * @h: first node of the linked list
 *	otherwise known as the head
 *
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		(h->str == NULL) ? printf("[0] (nil)\n")
			: printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
