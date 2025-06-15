#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int row, col, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			tens = product / 10;
			ones = product % 10;

			if (col == 0)
			{
				_putchar('0' + ones);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
					_putchar('0' + ones);
				}
				else
				{
					_putchar('0' + tens);
					_putchar('0' + ones);
				}
			}
		}
		_putchar('\n');
	}
}
