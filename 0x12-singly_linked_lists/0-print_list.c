#include "lists.h"

/**
 * _cprint - A C funtion that print a string
 *
 * @s: The string to print
 **/
void _cprint(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}


/**
 * print_number - A C function that prints an integer.
 *
 * @n: integer to be printed.
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

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

	while (h)
	{
		if (!h->str)
		{
			_cprint("[0] (nil)");
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			print_number(h->len);
			_cprint("] ");
			_cprint(h->str);
			_putchar('\n');
		}
		h = h->next;
		len++;
	}
	return (len);
}
