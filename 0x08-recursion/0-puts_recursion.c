#include "main.h"
/**
* main - check the code
*
* Description : A function that prints a
* @s:character to be printed
* string, followed by a new line.
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
