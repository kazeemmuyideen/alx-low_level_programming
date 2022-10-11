#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new type
 *
 * @name: the name of the dog (Bingo)
 * @age: the age of the dog ()
 * @owner: the name of the owner (Muyi)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;

	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*dog.h*/

