#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 *	  followed by a new line. Print all the letters
 *	  except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
