#include <stdio.h>

/**
 * main - a program that prints alphabets
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

