#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
	printf("98");
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
	else printf("98\n");	
}

