#include <stdio.h>

/**
  *main - this is the main entry point for my program
  *argument: this program takes no argument
  *Return: This program returns a zero by default
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
