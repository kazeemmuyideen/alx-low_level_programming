#include <stdio.h>
/**
 * main - This program prints all the numbers of base 16 in lowercase,
 * followed by new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
