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
	typedef struct dog dog_t; /*3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read*/

	dog; /*0. Poppy */

	void init_dog(struct dog *d, char *name, float age, char *owner); /* 1. A dog is the only thing on earth that loves you more than you love yourself */
	
	void print_dog(struct dog *d); /*2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad */
	

#endif /*dog.h*/

