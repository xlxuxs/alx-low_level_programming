#include "main.h"
/*
*main -  a function that prints the numbers, from 0 to 9,
*	followed by a new line.
*
*@n;intiger from main function
*
*
*/
void print_line(int n)
	{
	int i;
	for (i = 0; i < n; i++)
	{
	if (n <= 0)
	{
	_putchar('\n');
	}
	_putchar('_');
	}
	_putchar('\n');
	}
