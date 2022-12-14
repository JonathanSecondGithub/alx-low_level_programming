#include "main.h"



/**
 *  * _isalpha - Check Main
 *
 *   * @x: An input character
 *
 *    * Description: function returns 1 if the character is a
 *
 *     * letter, lowercase or uppercase.
 *
 *      * Return: 1 or 0 in otherwise.
 *
   */

int _isalpha(int x)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (x == lower || x == upper)
			isletter = 1;
		}
	}
	return (isletter);
}
