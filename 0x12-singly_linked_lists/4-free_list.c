#include "lists.h"

/**
 * free_list - A C function that frees a list_t list.
 *
 * @head: reference to the first node of the linked list
 **/
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *nextNode;

	while (node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
	head = NULL;
}

