#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - program used to store a linked list
 * @i: used to store integer
 * @n: used to store thenext node
 */
struct listint_s
{
    int i;
    struct listint_s *n;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
