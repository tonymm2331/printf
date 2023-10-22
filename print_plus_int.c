#include "main.h"

/**
 * prinpint - prints int with +
 * @arguments: intput str
 * @buf: buffer pointer
 * @ibuf: index for buf pointer
 * Return: num of chars printed
 */

int prinpint(va_list arguments, char *buf, unsigned int ibuf)
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
		ibuf = handl_buf(buf, '+', ibuf);
	}
	y = x;
	d = 1;
	for (; y > 9;)
	{
		d *= 10;
		y /= 10;
	}
	for (i = 0; d > 0; d /= 10, i++)
	{
		ibuf = handl_buf(buf, ((x / d) % 10) + '0', ibuf);
	}
	return (i + 1);
}
