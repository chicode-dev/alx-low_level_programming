#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct dog - dog variables
 * @name: para
 * @age: para
 * @owner: para
 *
 * Description: simple dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
