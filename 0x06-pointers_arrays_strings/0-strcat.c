#include"main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @src:source
 * @dest:destination
 * Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int string_length, i;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, string_length++)
	{
		dest[string_length] = src[i];
	}
	dest[string_length] = '\0';

	return (dest);
}
