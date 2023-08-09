#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct list_s
{
    int n;
    struct list_s *next;
} list_t;

size_t print_listint(const list_t *h);
list_t *add_nodeint(list_t **head, const int n);
void free_listint(list_t *head);
int check_cycle(list_t *list);

#endif /* LISTS_H */
