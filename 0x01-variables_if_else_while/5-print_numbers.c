#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.
 *
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		printf("%i", cnt);
	}
	printf("\n");
	return (0);
}
