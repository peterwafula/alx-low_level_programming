#include "main.h"

#include <string.h>

/**
  *_strncat - concatenates n bytes
  *@dest: Destination to copied string
  *@src: Source of the string to be copied
  *@n: maximum number of bytes
  *Return: pointer to the destination
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
