#include "main.h"

/**
  *leet - Convert characters to leet maethod
  *@s: string to be converted
  *Return: Return converted string
*/

char *leet(char *s)
{
	int i, j;
	char *src = "aAeEoOtTlL";
	char *dst = "4433007711";


	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (s[i] == src[j])
				s[i] = dst[j];
		}
	}
	return (s);
}
