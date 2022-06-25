#include <stdio.h>

/**
 * main - C program Entry point
 * A program that prints all arguments it receives.
 *
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
