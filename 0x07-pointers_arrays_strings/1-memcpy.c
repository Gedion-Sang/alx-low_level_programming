#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n:function copies
 * @src: source
 * @dest: destination
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
