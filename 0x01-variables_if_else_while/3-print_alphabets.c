#include <stdio.h>
/**
 * main - This program prints lowercase first
 *	  before the uppercase followed by new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
	putchar('\n');

	return (0);
}
