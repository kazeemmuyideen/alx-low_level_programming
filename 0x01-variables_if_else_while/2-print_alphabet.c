#include <stdio.h>
/**
 * main - this program prints alphabet in lower case followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
