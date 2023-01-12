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
	int *s3, i = 0, j = 0;

	str1 = s1;
	str2 = s2;
	str3 = s3;

	while (str1[i] != '\0')
	{
		str3[j] = str1[i];
		i++;
		j++;
	}

	i = 0;

	while (str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}

	return (s3);
}
