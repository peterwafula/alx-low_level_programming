#include "main.h"

/**
  *reverse_array - reverses an array
  *@a: array to be reversed
  *@n: number of elements
  *Return: void
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
