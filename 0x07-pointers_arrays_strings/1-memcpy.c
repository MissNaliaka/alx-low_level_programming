#include "main.h"
/**
 * _memcpy - function that copies n characters from memory area src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the source
 * @n: number of bytes to be copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
