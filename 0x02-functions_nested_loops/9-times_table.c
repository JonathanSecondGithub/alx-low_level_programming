#include "main.h"

/**
 *  * times_table - Check main
 *
 *   * Description: It prints 9 times table starting with 0
 *
 *    * Return: Nothing.
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = 1; j < 9 ; j++)
		{
			x = i * j;
			_putchar(x);
			_putchar(',');
			_putchar('\t');
		}
	_putchar('\n');
	}
return (0);
}
