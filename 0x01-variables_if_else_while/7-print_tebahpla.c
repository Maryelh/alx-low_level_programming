#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char lette;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
