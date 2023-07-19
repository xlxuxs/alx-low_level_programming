#include "stdio.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 *               followed by a new line.
 *
 * @n: The first number
 *
 * Return: prints from n to 98.
 */
void print_to_98(int n)
	{
	if (n > 98)
	{
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	printf("98\n");
	}
	else if (n < 98)
	{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	printf("98");
	printf("\n");
	}
	else
	printf("98\n");

}

