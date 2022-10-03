#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments including the first one
 *
 * @argc: number of arguments
 *
 * @argv: the vector that hold vector
 * Description: using arc and argv to achieve the indended function
 * Return: returns the name
 **/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
