#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
    unsigned long int f1 = 1, f2 = 2, next;
    int i;

    printf("%lu, %lu", f1, f2);
    for (i = 3; i <= 98; i++)
    {
        next = f1 + f2;
        printf(", %lu", next);
        f1 = f2;
        f2 = next;
    }
    printf("\n");

    return (0);
}
