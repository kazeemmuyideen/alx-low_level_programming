#include <stdio.h>
#include "main.h"
/**
 * main - Prints name followed by a new line
 *
 * @argc: number of arguments
 *
 * @argv: the vector that hold vector
 * Return: returns the name
 **/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
