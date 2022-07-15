#include "lists.h"

/**
 * add_node - A C function that adds
 * a new node at the beginning of a list_t list.
 *
 * @head: reference to the first node of the linked list
 * @str: string to add to next node
 *
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newStr = strdup(str);
	if (!newStr)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newStr);
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

/**
 * _strlen - A C program that return
 * the length of strings
 * @s: an iterable string
 * Return: int, the length of @s
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}
