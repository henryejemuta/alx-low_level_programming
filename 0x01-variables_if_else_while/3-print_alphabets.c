#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
