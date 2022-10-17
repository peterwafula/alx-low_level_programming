#include <stdio.h>

/**
  *main - This is the main entry of the program
  *arguments: This function passes no argument
  *Return: This function returns zero by default
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k<10; k++)
			{
			if (i == j || i == k || j == k || j < i || k < i || k < j)
				continue;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k ==9)
					break;
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

