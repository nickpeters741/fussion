#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_node(listint_t **head, const char *str);
listint_t *add_node_end(listint_t **head, const char *str);
void free_listint(listint_t *head);
void pre_main(void) __attribute__ ((constructor));

#endif /* LISTS_H */
