#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer input
 * Return: pointer to a new memory
 */
void *malloc_checked(unsigned int b)
{
	void *vee;

	vee = malloc(b);
	if (vee == NULL)
		exit(98);
	return (vee);
}
