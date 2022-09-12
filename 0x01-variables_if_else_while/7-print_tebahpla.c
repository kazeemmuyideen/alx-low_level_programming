#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 *	  followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');

	return (0);
}
