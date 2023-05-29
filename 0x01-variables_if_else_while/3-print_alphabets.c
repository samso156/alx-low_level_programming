#include <stdio.h>
/**
* main - entry point of the program
*
* Description: a program that prints the alphabet in
*lowercase, and then in uppercase
*
* Return: Always 0 for success
*/
int main(void)
{
	char lower_case_char = 'a';
	char upper_case_char = 'A';

	while (lower_case_char <= 'z')
	{
		putchar(lower_case_char);
		lower_case_char++;
	}
	while (upper_case_char <= 'Z')
	{
		putchar(upper_case_char);
		upper_case_char++;
	}
	putchar('\n');
	return (0);
}
