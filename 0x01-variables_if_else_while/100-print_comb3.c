#include <stdio.h>

/**
  *main - This is the main entry of the program
  *arguments: This function passes no argument
  *Return: This function returns zero by default
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
				continue;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
