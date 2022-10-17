#include <stdio.h>

/**
  *main - This is the main entry point for my program.
  *arguments: This functions passes no aeguments.
  *Return: This program returns a zero by default.
*/

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i > 9)
		{	int k;
			for (k = 0; k < 6; k++)
				putchar(k + 'a');
		break;
		}
		else
			putchar(i + '0');
	putchar('\n');
	return (0);
}
