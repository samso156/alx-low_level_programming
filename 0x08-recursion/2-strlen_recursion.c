#include "main.h"
/**
* _puts_recursion - prints a string followed by a new line
*@s:character to be printed
*Return:returns void
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
