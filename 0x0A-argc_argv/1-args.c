#include "main.h"

#include <stdio.h>



/**
 *  * main - A program that prints the number of arguements you passed into it
 *
 *   * @argc: Number of arguments in the command line
 *
 *    * @argv: Array of arguments provided in the command line
 *
 *     * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
