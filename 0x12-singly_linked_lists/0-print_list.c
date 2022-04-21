#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: size_t of the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0,"(nil)");
			h = h->next;
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		e++;
	}
	return (e);
}
