#include "holberton.h"

/**
 * _isalpha - Checks if a character is an alphabetical char
 * @c: character to test
 *
 * Description: Takes in a character to test on.
 * It runs all the alphabetical chars comparing them
 * with the input character.
 * Return: 1 if the character is an alphabet. 0 otherwise
 * Example:
 *    _isalpha('a'); --> 1
 *    _isalpha(';'); --> 0
 **/
int _isalpha(int c)
{
	int testc = 0, isalpha = 0;

	while (!isalpha && testc < 26)
	{
		if (c == 'a' + testc || c == 'A' + testc)
			isalpha = 1;
		testc++;
	}
	return (isalpha);
}
