#include "main.h"
/**
 * puts2 - a function that prints every character of a string
 * @str: character to be printed
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
