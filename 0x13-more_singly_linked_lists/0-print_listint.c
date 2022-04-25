#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @print_listint: function to print elements in a linked list
 * @h: pointer to the head 
 * @size_t: data type for function
 */

size_t print_listint(const listint_t *h)
{
    int count = 0;
    while(h != NULL)
    {
        count++;
        printf("%d\n", h->n);
        h = h->next;
}
    return (count);
}

