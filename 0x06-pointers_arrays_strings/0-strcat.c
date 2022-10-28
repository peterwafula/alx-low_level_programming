#include "main.h"

#include <string,h>

/**
  *_strcat - concatenates strings
  *@dest: destination of the joined string
  *@src: Source of the other part of string
  *Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	char *pnt;

	pnt = strcat(dest, src);
	return (pnt);
}
