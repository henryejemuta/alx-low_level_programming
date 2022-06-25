#include <stdio.h>

/**
 * main - C program Entry point
 * a program that prints the
 * number of arguments passed into it.
 *
 * @argc: The number of command line arguments
 *	  The size of the argv array
 *
 * @argv: An array containing the program
 *	  command line arguments
 *	  An array of size argc
 *
 * Return: 0 - Alway return success
 **/
int main(int argc, char **argv)
{
/* index 0 is always the program name so we ignore the count by -1*/
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
