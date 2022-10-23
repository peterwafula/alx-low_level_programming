#include "main.h"

#include <ctype.h>

/**
  *_isdigit - Checks if argument passed is an int
  *@c: Argument to be checked
  *Return: 0 or 1
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
