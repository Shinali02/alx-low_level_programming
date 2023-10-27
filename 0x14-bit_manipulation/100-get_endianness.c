#include "main.h"

/**
 * get_endianness - programme checks the endianness
 *
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
