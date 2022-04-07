#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
void *malloc_checked(unsigned int b) {
    void *sten;
    
    sten = malloc(sizeof(b) + 1);
    
    if(sten==NULL){
        exit(98);
    }
    return(sten);
    
}

