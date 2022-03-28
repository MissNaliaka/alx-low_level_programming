#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept);
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return ('\0');
}
