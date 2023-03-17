#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: Determine if a random number is positive, negative or zero.
*
* Return: Always (0) for success
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d id positive", n);
	}
	else if (n < 0)
	{
		print("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
