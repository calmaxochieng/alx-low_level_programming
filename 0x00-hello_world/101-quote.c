#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 1 (success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2013-109\n", 59);
	return (1);
}