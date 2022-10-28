#include "main.h"

/**
  *reverse_array - reverses an array
  *@a: array to be reversed
  *@n: number of elements
  *Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;
	int *rev;
	
	rev = a;
	for (i = 0, j = n - 1; i < n; i++, j--)
	{
		rev[i] = a[j];
	}
	a = rev;
}
