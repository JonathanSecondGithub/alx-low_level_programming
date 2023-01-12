#include "main.h"
#include<stdlib.h>

/**
 * str_concat - function to concatenate 2 strings
 * @s1: fist string to be entered
 * @s2: second string to be entered
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int *s3, s1c = 0, s2c = 0, total;
	char *str1, *str2, *new_str;

	str1 = s1;
	str2 = s2;

	if (s1 == NULL)
		s1 = "";

	while (*s1)
	{
		s1++;
		s1c++;
	}

	s1 = str1;

	if (s2 == NULL)
		s2 = "";

	while (*s2)
	{
		s2++;
		s2c++;
	}

	s2 = str2;

	new_str = malloc(sizeof(char) * (s2c + s1c + 1));
	str1 = new_str;

	if (new_str == NULL)
		return (NULL);

	total = s1c + s2c;

	if (; i < total; i++)
	{	
		if (i < s1c)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (str1);
}
