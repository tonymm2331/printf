#include "main.h"

/**
 * prinhunt - prints short unsi int
 * @argumentsL int to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * ReturnL num of chars
 */

int prinhunt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned short int x, y, i, d;

	x = va_arg(arguments, unsigned int);

	y = x;
	d = 1;

	for (; y > 9;)
	{
		d *= 10;
		y /= 10;
	}

	for (i = 0; d > 0; d /= 10, i++)
		ibuf = handl_buf(buf, ((x / d) % 10) + '0', ibuf);
	return (i);
}
