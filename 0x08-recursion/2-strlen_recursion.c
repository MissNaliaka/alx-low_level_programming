#include "main.h"
/**
 * _strlen_recursion - function that returns string length
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}
