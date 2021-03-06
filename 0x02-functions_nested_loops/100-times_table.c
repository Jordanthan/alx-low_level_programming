#include "main.h"

/*
 * print_times_table - prints the time table
 * @n: integer for which the times table will br printed
 *
 * Description: prints the time table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
