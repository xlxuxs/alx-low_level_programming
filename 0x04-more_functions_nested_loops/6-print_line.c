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
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	for (int i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}

