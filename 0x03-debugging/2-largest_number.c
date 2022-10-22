#include "main.h"

/**
  *largest_number - returns the largest of 3 numbers
  *@a: first interger
  @b: second interger
  @c: third interger
*/

in largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		return (a);
	else if (b >= a && b >= c)
		return (b);
	else
		return (c);
}
