#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A C function that concatenates all the
 * arguments of your program.
 *
 *
 * @ac: arguments count
 * @av: string array of arguments
 *
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k = 0, n = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	a = malloc(n * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k++] = av[i][j];
		}
		a[k++] = '\n';
	}
	a[k] = '\0';

	return (a);
}
