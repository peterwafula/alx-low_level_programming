#include "main.h"

/**
  *swap_int - Swaps two intergers
  *@a: first interger
  *@b: second interger
  *Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
