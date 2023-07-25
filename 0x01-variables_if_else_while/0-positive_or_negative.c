#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, prints its last digit,
 * and provides additional information about the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d and is ", n, n % 10);

	if (n % 10 > 5)
	{
		printf("greater than 5");
	}
	else if (n % 10 == 0)
	{
		printf("0");
	}
	else
	{
		printf("less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
