
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
	unsigned long sum, fib1, fib2, f1, f2, fi1, fi2;

	fib1 = 1;
	fib2 = 2;

	printf("1, 2");
	for (i = 2; i < 91; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf(", %ld", sum);
	}

	f1 = fib2 / 1000000000;
	f2 = fib2 % 1000000000;
	fi1 = sum / 1000000000;
	fi2 = sum % 1000000000;
	for (i = 92; i <= 98; i++)
	{
		printf(", %ld", fi1 + (fi2 / 1000000000));
		printf("%ld", fi2 % 1000000000);
		fi1 = fi1 + f1;
		f1 = fi1 - f1;
		fi2 = fi2 + f2;
		f2 = fi2 - f2;
	}

	printf("\n");
	return (0);
}
