#include "main.h"

/**
  *_strncpy - copies a string
  *@dest: destination of the copied string
  *@src: source of the string to be copied
  *@n: no of bytes max to be copied
  *Return: pointer to new string
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
