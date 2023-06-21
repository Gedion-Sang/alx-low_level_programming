#include "main.h"
/**
 * _isalpha-function that checks for alphabetic character
 * @c:character to check if it islowercase.
 * Return:1-for lowercase/uppercase,0-for anything else
 */



int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

