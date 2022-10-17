#include <stdio.h>

/**
  *main - This is the main entry point for my program
  *arguments: This program takes no argument
  *Return: This program returns zero by default
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
