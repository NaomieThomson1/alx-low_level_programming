#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int m;
long int n;
long long int o;
float p;
char q;

printf("Size of a char: %lu byte(s)\n", sizeof(q));
printf("Size of an int: %lu byte(s)\n", sizeof(m));
printf("Size of a long int: %lu byte(s)\n", sizeof(n));
printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
printf("Size of a float: %lu byte(s)\n", sizeof(p));
return (0);
}
