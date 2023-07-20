#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its paramters
 * @n: The number of paramters passed
 * @...: ellipses, unnamed arguments
 *
 * Return: 0 (If n == 0)
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum = 0;

	va_start(ap, n);

	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
