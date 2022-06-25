#include <stdio.h>
#include <stdlib.h>

/**
 * main - C program Entry point
 * A program that prints the minimum
 * number of coins to make change for
 * an amount of money.
 *
 * Usage: ./change cents
 * where cents is the amount of
 * cents you need to give back
 * if the number of arguments
 * passed to your program is not
 * exactly 1, print Error, followed
 * by a new line, and return 1
 * you should use atoi to parse the
 * parameter passed to your program
 * If the number passed as the argument
 * is negative, print 0, followed
 * by a new line
 * You can use an unlimited number
 * of coins of values 25, 10, 5, 2,
 * and 1 cent
 *
 *
 * @argc: The number of command line arguments
 *	  The size of the argv array
 *
 * @argv: An array containing the program
 *	  command line arguments
 *	  An array of size argc
 *
 * Return: 0 - Alway return success
 **/
int main(int argc, char *argv[])
{
	int coins = 0, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
