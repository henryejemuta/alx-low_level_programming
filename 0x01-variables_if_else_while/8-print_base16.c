#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 *
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt, cntr;

	for (cnt = 0; cnt < 10; cnt++)
		putchar(cnt + '0');
	for (cntr = 'a'; cntr <= 'f'; cntr++)
		putchar(cntr);
	putchar('\n');
	return (0);
}
