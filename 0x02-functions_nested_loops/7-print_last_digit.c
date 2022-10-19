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

	if (num < 0)
		last = -1 * (num % 10);
	else
		last = num % 10;

	_putchar(last + '0');
	return (last);
}
