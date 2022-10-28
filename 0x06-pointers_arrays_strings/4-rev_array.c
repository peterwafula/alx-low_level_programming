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
	j = n - 1;
	for (i = 0; i < n; i++)
	{
		*rev = a[j];
		rev++;
		j--;
	}
	a = rev;
}
