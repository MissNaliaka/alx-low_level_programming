#include "main.h"

/**
 * _strcpy - function tha copies the string pounted to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (src[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
