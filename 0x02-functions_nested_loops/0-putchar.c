#include "main.h"
/**
*main - entry point of the program
*
*Description: function prints text as output
*
*Return: return 0
*/
int main(void)
{
	char my_char[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(my_char[i]);
	}
	_putchar(10);
	return (0);
}
