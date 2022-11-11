#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - this function creates an array
  *@size: size of memory
  *@c: character to be saved
  *Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (0);
	if (size == 0)
		return (0);

	for(i = 0; i <= size; i++)
	{
		if (i == size)
			arr[i] = '\0';
		else
			arr[i] = c;
	}
	return (arr);
}
