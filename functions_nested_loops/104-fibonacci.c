#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *        separated by comma and space, followed by newline.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1, b1 = 0, b2 = 2;
	unsigned long c1, c2;
	int i;

	printf("1, 2, ");

	for (i = 3; i <= 98; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;

		if (c2 > 9999999999)
		{
			c1 += 1;
			c2 %= 10000000000;
		}

		printf("%lu%010lu", c1, c2);

		if (i != 98)
			printf(", ");
		else
			printf("\n");

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}

	return (0);
}
