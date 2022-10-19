#include "main.h"

#include <ctype.h>

/**
  *_isalpha - Checks whether argument passed is alpha
  *@c: The argument to be checked
  *Return: Returns either 1 or 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
