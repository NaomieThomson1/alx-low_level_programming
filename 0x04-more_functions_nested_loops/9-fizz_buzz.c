#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 through 100 follwed by a newline
 * for multiples of 3 it prints fuzz andbuzz for multiples of 5
 * the function prints fuzzbuzz for multiples of both 3 and 5
 * Return; always 0 (success)
 */

int main(void)
{
	int a = 1;

	for (; a < 100 ; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FIzzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");
	return (0);
}
