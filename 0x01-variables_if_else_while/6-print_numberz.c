#include <stdio.h>

/**
 * main - a program that prints single digits of base 10
 *
 * Return: (0) Always
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
