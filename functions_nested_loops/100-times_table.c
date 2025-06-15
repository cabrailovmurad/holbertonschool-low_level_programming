#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of the times table, must be between 0 and 15 inclusive
 */
void print_times_table(int n)
{
	int i, j, val;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			val = i * j;

			if (j == 0)
			{
				/* First number in the line, print without leading spaces */
				printf("%d", val);
			}
			else
			{
				/* Format spaces depending on the value's width */
				if (val < 10)
					printf(",   %d", val);
				else if (val < 100)
					printf(",  %d", val);
				else
					printf(", %d", val);
			}
		}
		printf("\n");
	}
}
