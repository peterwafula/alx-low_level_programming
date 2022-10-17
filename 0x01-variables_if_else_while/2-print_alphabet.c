#include <stdio.h>

/**
  *main - The main entry point for my program
  *argument: This program taked no arguments
  *Return: this program returns zero by default
*/

int main(void)
{
	char c;

	for (c='a' ; c <= 'z' ; c++)
		putchar(c);
	return(0);
}
