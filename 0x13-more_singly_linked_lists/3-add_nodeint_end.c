#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: pointer to pointer of first element of list.
  * @n: element to be added in the list.
  *
  * Return: address of the new element or NULL if it fails.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *last_nodeint;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	/* if head is a null pointer, assign new node to it*/
	if (*head == NULL)
		*head = new_nodeint;

	else
	{
		last_nodeint = *head;

		while (last_nodeint->next != NULL)
			last_nodeint = last_nodeint->next;

		last_nodeint->next = new_nodeint;
	}

	return (new_nodeint);
}
