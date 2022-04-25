#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - list the number of elements
 * @h: pointer to the head
 * @return: the value of count
 */
size_t listint_len(const listint_t *h)
{   int count = 0;
    while (h != 0)
        count++;
        h = h->next;

    return (count);
}
