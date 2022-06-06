#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 *
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		putchar(cnt + '0');
	}
	putchar('\n');
	return (0);
}
