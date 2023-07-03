#include "main.h"

/**
 * print_last_digit - Check main
 * @x: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number x
 */

int print_last_digit(int x)
{
	if (x < 0)
		x = -1 * x;

	if (x > 10)
		x = x % 10;
	_putchar(x + '0');
	return (x);
}
