/**
 * swap_int - A function that swaps the value of two intergers
 *
 * @a: It's a pointer a
 *
 * @b: It's a pointer b
 *
 * Return: Always 0
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
