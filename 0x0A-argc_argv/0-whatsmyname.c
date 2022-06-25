#include <stdio.h>
#include "main.h"

/**
 * main - C program entry point
 * a program that prints its name,
 * followed by a new line.
 *
 * @argc: The number of command line arguments
 *	  The size of the argv array
 *
 * @argv: An array containing the program
 *	  command line arguments.
 *	  An array of size argc
 *
 * Return: 0 - Always return success
 **/
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
