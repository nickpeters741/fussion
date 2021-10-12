#include "lists.h"
/**
  * listint_len - returns the number of elements ina linked listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elements in list.
  */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
