#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - gets sum of all parameters
 *@n: num of args
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return(0);

	for (i = 0; i < n; ++i)
		sum+= va_arg(ap, int);
	va_end(ap);
	return(sum);
}
