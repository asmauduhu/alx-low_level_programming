#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
* *malloc_checked - this is the main code
* @b: this is the unsigned int
* *ptr: this is the ptr to be returned
* Return: returns different outputs based on allocation
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	else
	return (ptr);
}
