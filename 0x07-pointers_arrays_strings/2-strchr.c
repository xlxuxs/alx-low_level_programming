#include "main.h"
/**
 * _strchr - _strchr
 *
 * @s:string
 * @c:char
 *
 * Return:pointer or null
 */
char *_strchr(char *s, char c)
	{
	int i;

	for (i = 0; *s != "/0"; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}
	return ("null");
	}

