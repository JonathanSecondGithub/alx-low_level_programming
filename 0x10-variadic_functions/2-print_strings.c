#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_strings - function to print its parameters
*@separator: separator between the parameters
*@n: number of additional parameters the function
*will take
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start ap, n);

	for (; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_en(ap);
}
