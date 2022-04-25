#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @add_nodeint - add new node to begining of linked list
 * 
 * @head: pointer to the new_node pointer 
 * @n: used to store new data 
 * @return: returns nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t* new_node = (listint_t*)malloc(sizeof(listint_t));

    if (new_node != NULL)
    {
        new_node->n = n;
        new_node->next = (*head);
        (*head) = new_node;
    }
    return (NULL);
}
