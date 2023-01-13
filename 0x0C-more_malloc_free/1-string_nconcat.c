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
	int i = 0, j = 0, s1len = 0, s2len = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[s1len])
		s1len++;

	if (s2 == NULL)
		s2 = "";

	while (s2[s2len])
		s2len++;

	if (n > s2len)
		n = s2len;

	s3 = malloc(sizeof(char) * (s1len + s2len + 1));

	if (s3 == NULL)
		return (NULL);

	for (; i < s1len; i++)
	{
		s3[j] = s1[i];
		j++;
	}

	i = 0;
	for (; i < n; i++)
	{
		s3[j] = s2[i];
		j++;
	}

	s3[j] = '\0';
	return (s3);
}
