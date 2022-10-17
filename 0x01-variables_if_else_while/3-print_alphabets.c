#include <stdio.h>

/**
  *main - This is the main entry point for my program
  *argument: My program takes no argument
  *Return: This program returns a zero by default
*/

int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}

