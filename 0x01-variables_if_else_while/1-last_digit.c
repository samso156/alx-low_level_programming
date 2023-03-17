#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Main entry point of the program.
*
* Description: This program prints the last digit of the random number
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 < 6)
	{
		printf("The last digit of %d is %d and is less 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("The last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
