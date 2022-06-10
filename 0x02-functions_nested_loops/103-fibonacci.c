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
	long sum, fib1, fib2, evensum;

	fib1 = 1;
	fib2 = 2;
	sum = 3;
	evensum = 0;
	while (sum < 4000000)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		if ((sum % 2) == 0)
		{
			evensum += sum;
		}
	}
	printf("%lu\n", evensum);
	return (0);
}
