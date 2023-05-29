#include <stdio.h>
/**
* main - prints numbers 0-9 without using char or printf/puts,
* and putchar 2x max
*
*Description: a program that prints all single digit
*numbers of base 10
* Return: 0 on success
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
