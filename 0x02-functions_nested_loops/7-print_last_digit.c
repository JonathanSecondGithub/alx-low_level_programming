include "main.h"

/**
 *  * print_last_digit - Check main
 *   * @x: An integer input
 *    * Description: This function prints the last digit of a number
 *     * Return: last digit of number x
 */

int print_last_digit(int x)
{
	int r;

	if (x < 0)
		r = -1 * (r % 10);
	else
		r = x % 10;

	_putchar(r);
	_putchar(', ');
}
