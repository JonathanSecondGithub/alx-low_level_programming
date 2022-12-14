#include "main.h"

/**
 *  * print_sign - Check Main
 *  * @x: An input number
 *  * Description: This function prints the sign of the number
 *  * Return: 1 if number is positive, o if number is 0, or
 *  * -1 if number is negative
 */
int print_sign(int x)
{
	int value;

	if (x > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (x == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
		return (value);
}
