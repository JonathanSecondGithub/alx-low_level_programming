#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function to add
 * @a: first parameter
 * @b: second parameter
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to add
 * @a: first parameter
 * @b: second parameter
 * Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: first parameter
 * @b: second parameter
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide
 * @a:first parameter
 * @b: second parameter
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to calc modulus
 * @a: sirst parameter
 * @b: second parameter
 * Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
