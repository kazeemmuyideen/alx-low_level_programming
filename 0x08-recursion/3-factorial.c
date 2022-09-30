#include "main.h"
/**
* factorial - recursion function that returns the factorial
*
* @n:  parameter
*
*Return: length
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
