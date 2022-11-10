#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @n: length of s2
* @s1: string one
* @s2: string two
* Return: return null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int count1 = 0; /*This is to count the numbber of characters in s1*/
	int count2 = 0; /*This is to count the number of characters in s2*/
	int index1;
	unsigned int index2;
	unsigned int *ptr;

	if (s1 == NULL)
	s1 = "";
	else if (s2 == NULL)
	s2 = "";
	ptr = &n;
	while (*(s1 + count1) != '\0')
	{
		count1++;
	}
	while (*(s2 + count2) != '\0')
	{
		count2++;
	}
	s3 = (char *)malloc(sizeof(*s3) * (count1 + count2 + 1));
	if (s3 == NULL)
	return (NULL);
	else if (ptr == NULL)
	return (s1);
	else
		for (index1 = 0; index1 <= count1; index1++)
		{
			*(s3 + index1) = *(s1 + index1);
		}
		for (index2 = 0; index2 <= n; index2++)
		{
			*((s3 + count1) + index2) = *(s2 + index2);
		}
	return (s3);
}
