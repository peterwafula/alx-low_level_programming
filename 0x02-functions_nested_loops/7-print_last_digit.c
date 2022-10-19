#include "main.h"

#include <stdio.h>

/**
  *print_last_digit - Prints last digit of a number
  *@num: The number to be printed
  *Return: Returns the last digit
*/

int print_last_digit(int num)
{
	int last;

	last = num % 10;

	printf("%d", last);
	
	return (last);
}
