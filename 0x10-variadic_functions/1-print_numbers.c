#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
print_numbers - function to print its parameters
@separator: separator between the parameters
@n: number of additional parameters the function
will take
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start (ap, n);         

	for (; i < n; i++)
	{
		printf("%d" , va_arg (ap, int));

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%c", *separator);
	}	

	printf("\n");  
	va_end (ap);                  
}
