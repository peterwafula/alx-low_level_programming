#include "main.h"

#include <stdio.h>

/**
  *main - Entry to progarm
  *argument: Takes no argument
  *Return: Returns void.
*/

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;;
	}
	printf("%d", sum);
	return (0);
}