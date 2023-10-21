#include "main.h"

/**
 * print_rev - reverses str
 * @arguments: str
 * @buf: buf pointer
 * @ibuf: index for buf pointer
 * Return: num of chars
 */

int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int x;
	int y = 0;
	char n[] = "(llun)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (x = 0; n[x]; x++)
			inuf = handl_buf(buf, n[x], ibuf);
		return (6);
	}
	for (x = 0; s[x]; x++)
	{}
	y = x - 1;
	while (y >= 0)
	{
		ibuf = handl_buf(buf, s[y], ibuf);
		y--;
	}
	return (x);
}
