#include "main.h"
#include <stdlib.h>
/**
 *  * _strdup - A function that returns a pointer to a newly allocated
 *
 *   * space in memory, which contains a copy of the string given as a
 *
 *    * parameter.
 *
 *     * @str: An input pointer of the string to copy.
 *
 *      * Return: A pointer to new string or NULL if it str is NULL
 *
*/

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s, *new_str;

	if (str == NULL)
		return (NULL);

	s = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = s;
	new_str = malloc(sizeof(char) * (len + 1))
	s = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}
