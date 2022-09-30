#include "main.h"
/**
* _pow_recursion - recursion function that returns the value of x pow y
*
* @x:  parameter base
*
* @y: parameter power
*
*Return: length
*/
int _pow_recursion(int x, int y)
{
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
