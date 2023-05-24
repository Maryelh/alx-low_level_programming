#include <stdio.h>

/**
 * print_to_98 - Prints all the natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);

	return (0);
}
