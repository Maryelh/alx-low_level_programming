#include <stdio.h>

/**
 * main - 6. Numberz of base 10 starting from 0
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
