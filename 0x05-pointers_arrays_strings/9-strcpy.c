#include "main.h"

#include <string.h>

/**
  *_strcpy - copy a string
  *@dest: destination
  *@src: sourve
  *Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	return (dest);
}
