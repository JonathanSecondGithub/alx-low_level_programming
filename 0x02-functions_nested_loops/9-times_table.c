#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

void times_table(void)
{
	int i, j, x ;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = 1; j < 9 ; j++)
		{
			x = i * j;
			_putchar(x);
			_putchar(',');
			_putchar('\t');	


		}	
		_putchar('\n);
	}
}
