#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line in the terminal
 * followed by a new line
 * @n: an input  integer
 * Return: always 0
 */

void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
