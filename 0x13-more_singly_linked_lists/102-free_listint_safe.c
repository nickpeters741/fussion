#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of list to free
 * Return: size of free'd list (in nodes?)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (nodeCount);
	while (*h)
	{
		nodeCount++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (nodeCount);
}
