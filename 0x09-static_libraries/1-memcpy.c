#include "main.h"
/**
 * _memcpy - _memcpy
 *
 * @dest:array
 * @src:array
 * @n:integer
 *
 * Return:pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
	}

