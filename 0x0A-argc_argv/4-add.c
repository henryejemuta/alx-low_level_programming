#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - C program Entry point
 * A program that adds positive numbers.
 *
 * Print the result, followed by a new line
 * If no number is passed to the program,
 * print 0, followed by a new line
 *
 * If one of the number contains symbols that
 * are not digits, print Error, followed by a
 * new line, and return 1
 *
 * You can assume that numbers and the addition
 * of all the numbers can be stored in an int
 *
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
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc > 0)
	{
		if (!atoi(argv[argc]))
		{
			puts("Error");
			return (1);
		}

		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
