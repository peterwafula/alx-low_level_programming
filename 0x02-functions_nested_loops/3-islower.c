#include "main.h"

#include <ctype.h>

/**
  *_islower - Checks for lowercase
  *@c: passws c to check its case
  *Return: Returns an integer 1 or 0
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
