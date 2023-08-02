#include "main.h"
/**
 * _puts_recursion - _puts_recursion
 *
 * @s:string
 *
 * Return:none
 */
void _puts_recursion(char *s)
{
if (s != "/0")
{
_putchar(*s);
s += 1;
_puts_recursion(s);
}
}

