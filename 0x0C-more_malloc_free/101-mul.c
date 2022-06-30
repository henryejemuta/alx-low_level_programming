#include "main.h"
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000


void multiply(char [], char[]);

/**
 * onlyNumbers - determines if string has only numbers
 * @c: input string
 * Return: 0 if false, 1 if true
 */
int onlyNumbers(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * main - A C program that multiplies two positive numbers.
 *
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line,
 * and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 *
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *f = argv[1];
	char *s = argv[2];

	if (argc != 3 || !onlyNumbers(f) || !onlyNumbers(s))
	{
		printf("Error\n");
		exit(98);
	}
	if (*f == 48 || *s == 48)
		printf("0\n");
	else
		multiply(s, f);
	return (0);
}



/**
 * multiply - multiplies two numbers and displays it
 * @f: first "number"
 * @s: second "number"
 */
void multiply(char *f, char *s)
{
	int i, len1, len2, total, fdigit, sdigit, res = 0, tmp;
	int *ptr;

	len1 = strlen(f);
	len2 = strlen(s);
	tmp = len2;
	total = len1 + len2;
	ptr = calloc(sizeof(int), (len1 + len2));
	for (len1--; len1 >= 0; len1--)
	{
		fdigit = f[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			sdigit = s[len2] - '0';
			res += ptr[len2 + len1 + 1] + (fdigit * sdigit);
			ptr[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[len1 + len2 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total--;
	}
	for (i = 0; i < total; i++)
		printf("%i", ptr[i]);
	printf("\n");
}
