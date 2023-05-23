#include <stdio.h>

/**
 * main - A program that prints _putchar
 * _putchar: printing the alphabet putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";

	write(1, str, 9);
	return (0);
}
