#include "main.h"

/**
 * prinsint - prints int after space
 * @arguments: input str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int prinsint(va_list arguments, char *buf, unsigned int ibuf)
{
	int n;
	unsigned int x, y, i, d;

	n = va_arg(arguments, int);
	if (n < 0)
	{
		x = n * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		x = n;
		ibuf = handl_buf(buf, ' ', ibuf);
	}
	y = x;
	d = 1;
	while (y > 9)
	{
		d *= 10;
		y /= 10;
	}
	for (i = 0; d > 0; d /= 10, i++)
		ibuf = handl_buf(buf, ((x / d) % 10) + '0', ibuf);
	return (i + 1);
}
