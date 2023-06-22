#include"main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c:character to be checked
 * Return:1 if c is uppercase or  0 otherwise
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
