#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @b: memory area
 * @s: constant byte.
 * @n: bytes memory area
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
