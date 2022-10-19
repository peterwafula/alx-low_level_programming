#include <stdio.h>

#include "main.h"

#include <string.h>

/**
  *main - This is the main entry of the program
  *arguments: This program takes no argument
  *Return: This program returns nothing
*/

int main()
{
	char str[] = "_putchar";

	int i, length;

	length = strlen(str);

	for(i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return(0);
}
