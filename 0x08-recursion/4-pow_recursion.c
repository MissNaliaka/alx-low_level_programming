#include "main.h"
/**
 * _pow_recursion - function that returns x power y
 * @x: integer
 * @y: integer
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
