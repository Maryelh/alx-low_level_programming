#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 98;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	n = 0;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	n = -1024;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	n = INT_MAX;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	n = INT_MIN;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	n = 1;
	printf("Last digit of %d is %d\n", n, print_last_digit(n));

	return (0);
}
