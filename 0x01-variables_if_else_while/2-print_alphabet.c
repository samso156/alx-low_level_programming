#include <stdio.h>
/**
* main - entry point of the program
*
* Description: a program that prints the alphabet in lowercase
*
* Return: Always 0 for success
*/
int main(void)
{
	char my_character = 'a';

	while (my_character <= 'z')
	{
		putchar(my_character);
		my_character++;
	}
	putchar('\n');
	return (0);
}
