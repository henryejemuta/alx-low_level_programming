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
	int i;
	long int sum, fib1, fib2;

	/* 0th and 1st  numbers of the series are 1 and 2*/
	fib1 = 1;
	fib2 = 2;

	printf("1, 2, ");
	for (i = 2; i < 50; i++)
	{
		/* Add the two previous numbers in the series and
		  store it at the current index */
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf("%ld", sum);
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
