#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * The _strdup() function returns a pointer to a new string which is a duplicate of the string str.
 *  Memory for the new string is obtained with malloc, and can be freed with free.
 *  
 * Returns NULL if str = NULL
 * 
 * On success, the _strdup function returns a pointer to the duplicated string. 
 * It returns NULL if insufficient memory was available
 * 
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++);
		
        strnew = (char *)malloc(n + 1 * sizeof(char));
        if (strnew != NULL)
        {
            for (i = 0; str[i] != '\0'; i++)
                strnew[i] = str[i];
        } else
        {
            return (NULL);
        }
	strnew[i] = '\0';
	return (strnew);
}

