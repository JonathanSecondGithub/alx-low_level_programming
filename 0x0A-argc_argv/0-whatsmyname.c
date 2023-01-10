#include "main.h"
#include <stdio.h>


/**
 * main - main function
 *
 *  @argc : number of command line arguments
 *
 *  @argv : array of command line arguments
 *
 *  Return: Always 0 (Success)
 */

int main (int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
