#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to head of the list
 * Return: int n (number of elements in the list)
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
