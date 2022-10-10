#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a dog and store info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	int i, j, k;

	a_dog = malloc(sizeof(*a_dog));
	if (a_dog == NULL || !(name) || !(owner))
	{
		free(a_dog);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
		;

	for (k = 0; owner[k]; k++)
		;

	a_dog->name = malloc(j + 1);
	a_dog->owner = malloc(k + 1);

	if (!(a_dog->name) || !(a_dog->owner))
	{
		free(a_dog->owner);
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		a_dog->name[i] = name[i];
	a_dog->name[i] = '\0';

	a_dog->age = age;

	for (i = 0; i < k; i++)
		a_dog->owner[i] = owner[i];
	a_dog->owner[i] = '\0';

	return (a_dog);
}
