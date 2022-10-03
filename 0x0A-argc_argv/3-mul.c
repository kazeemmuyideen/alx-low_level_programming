#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Print multiples of two number
 *
 * @argc: number of arguments
 *
 * @argv: the vector that hold vector
 * Description: using arc and argv to achieve the indended function
 * Return: returns the name
 **/

int main(int argc, char **argv)
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*
	for (i = 1; i <= argc; i++)
	{
		sum = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", sum);
	}
	return (0);
	*/

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
