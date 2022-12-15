#include "main.h"



/**
 *  * _islower - Check Main
 *
 *   * @x: An input character
 *
 *    * Description: function uses _putchar function to print
 *
 *      * Return: 1 if is lowercase or 0 if is uppercase
 *
 */

int _islower(int x)
{
	char m;
	int lower = 0;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == x)
		lower = 1;
	}
	return (lower);
}
