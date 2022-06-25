#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - C program entry point
 * a program that multiplies two numbers.
 *
 * Your program should print the result of
 * the multiplication, followed by a new line
 * You can assume that the two numbers and
 * result of the multiplication can be stored
 * in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed
 * by a new line, and return 1
 *
 * @argc: The number of command line arguments
 *        The size of the argv array
 *
 * @argv: An array containing the program
 *        command line arguments.
 *        An array of size argc
 *
 * Return: 0 - Always return success
 **/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}

	printf("Error\n");
	return (1);
}
