#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints all possible different
 * combinations of two digits.
 *
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination
 * of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order,
 * with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
int h, i, j;

for (h = 0;  h < 8; h++)
{
	for (i = 1; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (h < i && i < j)
			{
				putchar(h + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (!((h == 7) && (i == 8) && (j == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
