#include "function_pointers.h"

/**
 * array_iterator - array printing
 * @array: int arr
 * @size: size of arr
 * @action: pointer fun
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array && action)
		for (i=0; i<size; i++)
			action(array[i]);
}
