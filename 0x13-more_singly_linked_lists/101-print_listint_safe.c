#include "lists.h"

/**
 * print_listint_safe - prints list, avoids loop
 * @head: points to start of list
 * Return: number of nodes in size_t or exit 98
 */
size_t print_listint_safe(const listint_t *head)
{
	/* declarations */
	size_t nodeCount = 0;
	/* check for null pointer */
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodeCount += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (nodeCount);
}
