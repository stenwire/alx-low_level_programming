#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @brief 
 * 
 * @param head 
 * @param n 
 * @return listint_t* 
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t* new_node = (listint_t*)malloc(sizeof(listint_t));

    while (*head != NULL)
    {
        *head = new_node->next;

        if (new_node != NULL)
        {
            new_node->n = n;
            new_node->next = (*head);
            (*head) = new_node;
        }
    return (NULL);
    }
    
}
