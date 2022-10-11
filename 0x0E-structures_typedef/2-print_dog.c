#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - this function prints dog information if d is not null
 *
 * @d: parameter
 **/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* I print as the example */
		/* I use the ? operator */
		/* return its left-hand operand if is not null */
		/* otherwise,evaluates the righ operand and return its result*/

		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}

}

