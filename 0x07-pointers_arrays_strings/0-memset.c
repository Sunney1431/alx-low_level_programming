#include "main.h"
/**
 * _memset - ills memory with a constant byte.
 * @s:source string
 * @b:the constant byte for filling
 * @n:length of buffer
 * Return:new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
