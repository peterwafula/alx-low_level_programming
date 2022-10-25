#include "main.h"

#include <stdio.h>

/**
  *main - print largest factor
  *Return: 0
*/

int main(void)
{
	long int num, new, div, max;
	num = 612852475143;
	div = 2;
	max = 0;
	new = num;

	while (div < new)
	{
		if (new % div == 0)
		{
			new = num / div;
			if (max < div)
				max = div;
		}
		else
			div++;
	}
	printf("%ld", max);
}
