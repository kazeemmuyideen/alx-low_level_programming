#include <stdio.h>
#include <unistd.h>
/**
* main - Entry
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	n = write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 80);
	printf("value of n is %d", n);

	return (0);
}


