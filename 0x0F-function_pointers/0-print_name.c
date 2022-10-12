#include "function_pointers.h"

/**
 * print_name - accepts a char and pointer fun
 * @name: char para
 * @f: function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	*name = name;
	(*f)(p);
}
