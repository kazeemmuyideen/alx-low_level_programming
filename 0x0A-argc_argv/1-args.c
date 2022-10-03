#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments
 *
 * @argc: number of arguments
 *
 * @argv: the vector that hold vector
 * Description: using arc and argv to achieve the indended function
 * Return: returns the name
 **/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
