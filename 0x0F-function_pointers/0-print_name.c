#include<stdio.h>
#include "function_pointers.h"

/**
 * * print_name - function pointer
 *
 * * @name: name parameter
 *
 * * @f: function pointer parameter
 *
 * * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
