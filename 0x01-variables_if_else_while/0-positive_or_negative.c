#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > O)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is negative\n" , n);
	}
	return (0);
}


