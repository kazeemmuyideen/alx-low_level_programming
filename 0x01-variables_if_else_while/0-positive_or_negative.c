#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main- Entry
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Please enter your number: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n")
	}

	return (0);
}
