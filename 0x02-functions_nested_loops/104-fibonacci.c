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

        f = first / 1000000000;
        fr = first % 1000000000;
        l = last / 1000000000;
        lr = last % 1000000000;
        for (i = 90; i <= 98; i++)
        {
                oldf = f;
                oldfr = fr;
                printf(", %ld", (((oldf * 1000000000) + oldfr) + ((l * 1000000000) + lr)));
                f = l;
                fr = lr;
                l = (((oldf * 1000000000) + oldfr) + ((l * 1000000000) + lr)) / 1000000000;
                lr = (((oldf * 1000000000) + oldfr) + ((l * 1000000000) + lr)) % 1000000000;
        }

        printf("\n");
        return (0);
}
