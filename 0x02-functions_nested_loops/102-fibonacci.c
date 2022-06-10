#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * The numbers must be separated by comma,
 * followed by a space ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, last, i;
	long sum;

	first = 1;
	last = 2;

	sum = 0;
	printf("1, 2, ");
	for (i = 0; i < 50; i++)
	{
		sum = first + last;
		printf("%ld", sum);
		first = last;
		last = sum;
		if (i != 49)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
