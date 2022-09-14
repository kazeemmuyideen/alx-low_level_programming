#include "main.h"

/**
 * main - unction that prints 10 times the alphabet, in lowercase, 
 * 	followed by a new line.
 *
 * Return: Always 0 (success)
 */

void print_alphabet()
{
	char letter

	for(letter =  'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
