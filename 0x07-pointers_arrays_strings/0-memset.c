#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the n bytes for memory
 * @b: constant byte 
 * @n: size of memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for( i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
