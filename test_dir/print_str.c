#include "main.h"

/**
 * print_str - writes str to stdout
 * @arguments: input str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: 1 on success
 */

int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int x;
	char n[] = "(null)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (x = 0; n[x]; x++)
			ibuf = handl_buf(buf, n[x], ibuf);
		return (6);
	}
	for (x = 0; s[x]; x++)
		ibuf = handl_buf(buf, s[x], ibuf);
	return (x);
}
