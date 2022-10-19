#include "main.h"

#include <stdio.h>

/**
  *jack_bauer - Prints every minute.
  *argument: Takes no argument
  *Return: Returns nothing
*/

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", hour, min);
		}
	}
}
