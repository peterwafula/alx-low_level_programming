#include "main.h"

/**
  *string_toupper - converts string to upper
  *@s: string to be capitalized
  *Return: ccapitals
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
