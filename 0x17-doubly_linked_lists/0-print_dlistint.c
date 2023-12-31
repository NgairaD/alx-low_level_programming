#include "lists.h"
/**
 * print_dlistint - function
 *
 * @h: pointer to head node
 * Return: number of nodes
 *
 * Description: print all elements of a dlinked list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
