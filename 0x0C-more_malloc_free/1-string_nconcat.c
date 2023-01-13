#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be used from s2
 * Return: pointer to to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int new_str, i = 0, j = 0;

	while (s1)
	{
		s3[j] = s1;
		j++;
		s1++;
	}

	i = 0;

	while (s2 < n)
	{
		s3[j] = s2;
		s2++;
		j++;
	}

	return (s3);
}
