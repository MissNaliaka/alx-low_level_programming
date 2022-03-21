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

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
