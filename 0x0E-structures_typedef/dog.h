#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The Dog main struct.
 * @name: The dog name goes here.
 * @age: The age of that dog.
 * @owner: Who the owner? of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
