#include "main.h"

/**
  *rot13 - Convert characters to leet maethod
  *@s: string to be converted
  *Return: Return converted string
*/

char *rot13(char *s)
{
	int i, j;
	char *src = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *dst = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


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
