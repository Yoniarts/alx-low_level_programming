#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints " a random number to the variable n each time it is executed."
 * followed by new line.
 * Return: Always 0.
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					 n = 10;
					if ( n > 0)
					{
						printf("The number is positive\n");
					} else if( n < 0)
				       	{
						printf("The number is negative\n");
					} else {
						printf("The number is zero\n");
					}
					return (0);
}
