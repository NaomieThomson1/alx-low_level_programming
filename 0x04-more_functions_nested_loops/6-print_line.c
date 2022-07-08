#include "main.h"

/**
 * print_line - function that prints a straight line in the terminal
 * @n: number of _ to be printed
 * Retuurn: void
 */

void print_line(int n)
{
	int g = 0;

	while (g < n && n > 0)
	{
		_putchar('_');
		g++;
	}
	_putchar('\n');
}
