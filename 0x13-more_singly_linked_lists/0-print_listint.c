#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* print_listint - a func that prints all the elements of a list
* @h: holds the head to the linked list
* Return: the number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t n_C;
	const listint_t *next_ptr;

	next_ptr = h;
	n_C = 0;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		n_C += 1;
		next_ptr = next_ptr->next;
	}

	return (n_C);
}
