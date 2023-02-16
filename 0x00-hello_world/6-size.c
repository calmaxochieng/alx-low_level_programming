#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of char:%lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float:%lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long long int: %lu byte(0)\n", (unsigned long)sizeof(c));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
