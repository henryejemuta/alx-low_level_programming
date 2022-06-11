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
unsigned long sum, first, last, f, fr, oldf, oldfr, l, lr;
unsigned long int divisor = 1000000000;

first = 1;
last = 2;

printf("1, 2");
for (i = 2; i < 90; i++)
{
	sum = first + last;
	first = last;
	last = sum;
	printf(", %ld", sum);
}

f = first / divisor;
fr = first % divisor;
l = last / divisor;
lr = last % divisor;
for (i = 90; i < 98; i++)
{
oldf = f;
oldfr = fr;
printf(", %lu", (((oldf *divisor) + oldfr)+((l *divisor) + lr)));
f = l;
fr = lr;
l = (((oldf *divisor) + oldfr)+((l *divisor) + lr)) / divisor;
lr = (((oldf *divisor) + oldfr)+((l *divisor) + lr)) % divisor;
}

printf("\n");
return (0);
}
