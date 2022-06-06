#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Print all the letters except q and e
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha == 'q' || cha == 'e')
			continue;
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
