#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/*
 * main - Prints if number is postive, zero or negative
 * Return: Always (success)
 *
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if ( n > 0)
		{
		printf("%d is positive\n");
		else if( n == 0)
		{
		printf("%d is zero\n");
		} else {
		printf("%d is negative\n");
		}
		return (0);
}
