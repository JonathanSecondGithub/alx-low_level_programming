#include "main.h"

/**
 *  * _strcat - a function that concatenates two strings.
 *
 *   * @dest: an input string
 *
 *    * @src: an input string
 *
 *      * Return: A pointer to the resulting string
 *
*/

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
