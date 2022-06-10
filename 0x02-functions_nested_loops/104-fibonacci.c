#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the first 98
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
	int i;
	unsigned long int sum, fib1, fib2;

	fib1 = 1;
	fib2 = 2;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf("%ld", sum);
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
