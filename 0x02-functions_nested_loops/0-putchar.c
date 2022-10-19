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
	for (int i=0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
