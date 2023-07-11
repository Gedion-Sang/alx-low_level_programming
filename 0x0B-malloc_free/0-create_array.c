#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: the array , and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
