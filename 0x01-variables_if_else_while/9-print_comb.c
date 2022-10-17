#include <stdio.h>

/**
  *main - This is the entry point for my program
  *argument: This function takes no argument
  *Return: This funvtion returns a default zero.
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
