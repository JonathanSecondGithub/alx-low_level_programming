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
	(*f)(name);
	return (0);
}
