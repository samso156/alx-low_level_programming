#include <stdio.h>
/**
* main - entry point of the program
*
* Description: program that prints the alphabet in lowercase
*excluding 'q' and 'e'
*
* Return: Always 0 for success
*/
int main(void)
{
	char my_character = 'a';

	while (my_character <= 'z')
	{
		if (my_character != 'e' && my_character != 'q')
		{
			putchar(my_character);
		}
		my_character++;
	}
	putchar('\n');
	return (0);
}
