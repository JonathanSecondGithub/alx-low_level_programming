#include <stdio.h>
#include "main.h"

/**
 *  * print_to_98 - Check Main
 *
 *   * @n: A input integer
 *
 *    * Description: function that prints all natural numbers
 *
 *     * from n to 98, followed by a new line.
 *
 *      * Return: Nothing
 *
    */

void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
																		}
	printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
																			printf(", ");
		}
	printf("\n");
	}
}
