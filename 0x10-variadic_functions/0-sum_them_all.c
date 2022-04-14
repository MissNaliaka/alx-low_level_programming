#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds all of the argumens
 * @n: Number of arguments
 *
 * Return: Sum of n number of arguments given
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vee;
	unsigned int count;
	int add;

	if (n == 0)
		return (0);

	va_start(vee, n);
	for (count = 0; count < n; count++)
		add += va_arg(vee, int);

	va_end(vee);
	return (add);
}
